package com.example.secondapp;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;



public class Splashscreeen extends AppCompatActivity {
    
    Handler handler = new Handler();
    //handler is user to delay the time of the splash screen
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_splashscreeen);
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        //.postDelayed run some progress after some time
        //runnable is  the function that key function
        handler.postDelayed(new Runnable(){
            @Override
            public void run(){
                Intent intent = new Intent(Splashscreeen.this,MainActivity.class);
                startActivity(intent);
                finish();
                //finnish end the process and prevent come back again from the splash screen
            }
        }, 3000);
    }
}
