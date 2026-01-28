package com.example.tutorial2group3;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.method.HideReturnsTransformationMethod;
import android.text.method.LinkMovementMethod;
import android.text.method.PasswordTransformationMethod;
import android.text.style.ClickableSpan;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.RadioButton;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    private boolean isPasswordVisible = false;
    public String usernameTeacher = "admin0105";
    public String passwordTeacher = "1234";
    
    public String usernameStudent = "A24DW0423";
    public String passwordStudent = "1234";
    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        // UI Elements
        EditText usernameEditText = findViewById(R.id.editTextText);
        EditText passwordEditText = findViewById(R.id.editTextTextPassword);
        ImageButton toggleButton = findViewById(R.id.imageView2);
        RadioButton radioButton = findViewById(R.id.radioButton);
        Button loginButton = findViewById(R.id.button);
        Button forgotPasswordButton = findViewById(R.id.button2);

        // 1. Password Toggle Logic
        toggleButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (isPasswordVisible) {
                    passwordEditText.setTransformationMethod(PasswordTransformationMethod.getInstance());
                    isPasswordVisible = false;
                } else {
                    passwordEditText.setTransformationMethod(HideReturnsTransformationMethod.getInstance());
                    isPasswordVisible = true;
                }
                passwordEditText.setSelection(passwordEditText.getText().length());
            }
        });

        // 2. Hyperlink Logic for RadioButton
        String text = "i accept the terms and conditions";
        SpannableString ss = new SpannableString(text);
        ClickableSpan clickableSpan = new ClickableSpan() {
            @Override
            public void onClick(View widget) {
                Intent browserIntent = new Intent(Intent.ACTION_VIEW, Uri.parse("https://www.google.com"));
                startActivity(browserIntent);
            }
        };
        ss.setSpan(clickableSpan, 13, 33, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        radioButton.setText(ss);
        radioButton.setMovementMethod(LinkMovementMethod.getInstance());

        // Make RadioButton toggleable
        radioButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (v.getTag() != null && (boolean) v.getTag()) {
                    radioButton.setChecked(false);
                    v.setTag(false);
                } else {
                    radioButton.setChecked(true);
                    v.setTag(true);
                }
            }
        });

        // 3. Login Logic with T&C Check
        loginButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String username = usernameEditText.getText().toString();
                String password = passwordEditText.getText().toString();

                if (!radioButton.isChecked()) {
                    Toast.makeText(MainActivity.this, "please agree the terms and condition", Toast.LENGTH_SHORT).show();
                } else {
                    if (username.equals(usernameTeacher) && password.equals(passwordTeacher)) {
                        Intent intent = new Intent(MainActivity.this, dashboard.class);
                        intent.putExtra("USER_NAME", "Mr Ngoo Jun Yu");
                        startActivity(intent);
                        finish();
                    } else if (username.equals(usernameStudent) && password.equals(passwordStudent)) {
                        Intent intent = new Intent(MainActivity.this, dashboard.class);
                        intent.putExtra("USER_NAME", "Ngoo Jun Yu");
                        startActivity(intent);
                        finish();
                    } else {
                        Toast.makeText(MainActivity.this, "Your password or Your username maybe wrong", Toast.LENGTH_SHORT).show();
                    }
                }
            }
        });

        // 4. Forgot Password Button Logic
        forgotPasswordButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, forgotPassword.class);
                startActivity(intent);
            }
        });
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
        finishAffinity();
        System.exit(0);
    }
}