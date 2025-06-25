-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 22, 2025 at 08:13 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `fbs`
--

-- --------------------------------------------------------

--
-- Table structure for table `booking`
--

CREATE TABLE `booking` (
  `booking_id` int(11) NOT NULL,
  `facility_id` int(11) DEFAULT NULL,
  `user_id` int(11) DEFAULT NULL,
  `booking_date` date NOT NULL,
  `start_time` time NOT NULL,
  `end_time` time NOT NULL,
  `booked_time` timestamp NOT NULL DEFAULT current_timestamp(),
  `status_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `booking`
--

INSERT INTO `booking` (`booking_id`, `facility_id`, `user_id`, `booking_date`, `start_time`, `end_time`, `booked_time`, `status_id`) VALUES
(1, 1, 3, '2025-06-20', '09:00:00', '11:00:00', '2025-06-17 13:47:09', 2),
(2, 2, 4, '2025-06-18', '14:00:00', '16:00:00', '2025-06-17 13:47:09', 2),
(3, 3, 5, '2025-06-21', '08:00:00', '10:00:00', '2025-06-17 13:47:09', 2),
(4, 4, 2, '2025-06-19', '13:00:00', '15:00:00', '2025-06-17 13:47:09', 3),
(5, 5, 1, '2025-06-22', '10:00:00', '12:00:00', '2025-06-17 13:47:09', 1),
(8, 1, 11, '2025-06-20', '18:30:00', '19:00:00', '2025-06-20 09:26:06', 1);

-- --------------------------------------------------------

--
-- Table structure for table `bookingstatus`
--

CREATE TABLE `bookingstatus` (
  `status_id` int(11) NOT NULL,
  `current_status` enum('Pending','Confirmed','Canceled') DEFAULT 'Pending'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `bookingstatus`
--

INSERT INTO `bookingstatus` (`status_id`, `current_status`) VALUES
(1, 'Pending'),
(2, 'Confirmed'),
(3, 'Canceled');

-- --------------------------------------------------------

--
-- Table structure for table `facility`
--

CREATE TABLE `facility` (
  `facility_id` int(11) NOT NULL,
  `name` varchar(150) NOT NULL,
  `added_by` int(11) DEFAULT NULL,
  `type_id` int(11) DEFAULT NULL,
  `status_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `facility`
--

INSERT INTO `facility` (`facility_id`, `name`, `added_by`, `type_id`, `status_id`) VALUES
(1, 'Classroom A101', 1, 1, 1),
(2, 'Tennis Court', 2, 3, 2),
(3, 'Microscope', 3, 2, 3),
(4, 'Computer Lab 3', 2, 1, 1),
(5, 'Sound System', 1, 5, 1);

-- --------------------------------------------------------

--
-- Table structure for table `facilitystatus`
--

CREATE TABLE `facilitystatus` (
  `status_id` int(11) NOT NULL,
  `facility_status` enum('Available','Unavailable','Maintenance') DEFAULT 'Available'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `facilitystatus`
--

INSERT INTO `facilitystatus` (`status_id`, `facility_status`) VALUES
(1, 'Available'),
(2, 'Unavailable'),
(3, 'Maintenance');

-- --------------------------------------------------------

--
-- Table structure for table `facilitytypes`
--

CREATE TABLE `facilitytypes` (
  `type_id` int(11) NOT NULL,
  `facility_types` enum('Classroom','Equipment','Sports Hall','Other') NOT NULL DEFAULT 'Other',
  `description` varchar(255) DEFAULT NULL,
  `photo` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `facilitytypes`
--

INSERT INTO `facilitytypes` (`type_id`, `facility_types`, `description`, `photo`) VALUES
(1, 'Classroom', 'A standard classroom with whiteboard and projector', 'classroom.jpg'),
(2, 'Equipment', 'Laptops, projectors, microphones, etc.', 'equipment.jpg'),
(3, 'Sports Hall', 'Indoor hall suitable for sports and large events', 'sports_hall.jpg'),
(4, 'Other', 'Miscellaneous spaces not categorized', 'other.jpg'),
(5, 'Equipment', 'Spare and backup equipment for events', 'equipment2.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `feedback`
--

CREATE TABLE `feedback` (
  `feedback_id` int(11) NOT NULL,
  `booking_id` int(11) DEFAULT NULL,
  `rating` int(11) DEFAULT NULL CHECK (`rating` between 1 and 5),
  `comments` text DEFAULT NULL,
  `created_when` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `feedback`
--

INSERT INTO `feedback` (`feedback_id`, `booking_id`, `rating`, `comments`, `created_when`) VALUES
(1, 1, 5, 'The classroom was clean and well-equipped.', '2025-06-17 13:47:24'),
(2, 2, 3, 'Court was fine but needed some maintenance.', '2025-06-17 13:47:24'),
(3, 3, 4, 'Microscope was functional, but a bit dusty.', '2025-06-17 13:47:24'),
(4, 4, 2, 'The lab was locked, couldn’t use it.', '2025-06-17 13:47:24'),
(5, 5, 5, 'Sound system exceeded expectations.', '2025-06-17 13:47:24');

-- --------------------------------------------------------

--
-- Table structure for table `role`
--

CREATE TABLE `role` (
  `role_id` int(11) NOT NULL,
  `role_types` enum('Admin','Staff','Student','Guest') DEFAULT 'Guest'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `role`
--

INSERT INTO `role` (`role_id`, `role_types`) VALUES
(1, 'Admin'),
(2, 'Staff'),
(3, 'Student'),
(4, 'Guest');

-- --------------------------------------------------------

--
-- Table structure for table `userprofile`
--

CREATE TABLE `userprofile` (
  `profile_id` int(11) NOT NULL,
  `user_id` int(11) DEFAULT NULL,
  `first_name` varchar(50) NOT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `email` varchar(255) NOT NULL,
  `contact_number` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `userprofile`
--

INSERT INTO `userprofile` (`profile_id`, `user_id`, `first_name`, `last_name`, `email`, `contact_number`) VALUES
(1, 1, 'John', 'Doe', 'john.doe@example.com', '012-3456789'),
(2, 2, 'Jane', 'Smith', 'jane.smith@example.com', '013-4567890'),
(3, 3, 'Alex', 'Tan', 'alex.tan@example.com', '014-5678901'),
(4, 4, 'Maria', 'Lim', 'maria.lim@example.com', '015-6789012'),
(5, 5, 'David', 'Lee', 'david.lee@example.com', '016-7890123'),
(6, 6, 'Yong', 'Yuan Lin', 'yuanlinplays@gmail.com', '0182123396'),
(11, 11, 'Lee', 'Xuan Hui', 'leexuanhui@gmail.com', '0142755982');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `user_id` int(11) NOT NULL,
  `username` varchar(50) NOT NULL,
  `password` varchar(255) NOT NULL,
  `created_time` datetime NOT NULL DEFAULT current_timestamp(),
  `role_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`user_id`, `username`, `password`, `created_time`, `role_id`) VALUES
(1, 'alicetan', 'hashed_pw_1', '2025-06-17 21:46:41', 1),
(2, 'boblee', 'hashed_pw_2', '2025-06-17 21:46:41', 2),
(3, 'charlieng', 'hashed_pw_3', '2025-06-17 21:46:41', 3),
(4, 'danalim', 'hashed_pw_4', '2025-06-17 21:46:41', 4),
(5, 'ethanwong', 'hashed_pw_5', '2025-06-17 21:46:41', 3),
(6, 'Yyl', '$2y$12$6VqTvHoTMyGKB0fbBDZ.zO8ET4BkYA392YnaAtT4H7PXc7IPnO3lG', '2025-06-20 00:07:52', 1),
(11, 'Lee', '$2y$12$bI/KqBwcEEFaGQcZWP0Pm.HkvRcTkiZoGWkLbqh.ijnoTIG3VMSfK', '2025-06-20 13:54:15', 3);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `booking`
--
ALTER TABLE `booking`
  ADD PRIMARY KEY (`booking_id`),
  ADD KEY `facility_id` (`facility_id`),
  ADD KEY `user_id` (`user_id`),
  ADD KEY `status_id` (`status_id`);

--
-- Indexes for table `bookingstatus`
--
ALTER TABLE `bookingstatus`
  ADD PRIMARY KEY (`status_id`),
  ADD UNIQUE KEY `current_status` (`current_status`);

--
-- Indexes for table `facility`
--
ALTER TABLE `facility`
  ADD PRIMARY KEY (`facility_id`),
  ADD KEY `added_by` (`added_by`),
  ADD KEY `type_id` (`type_id`),
  ADD KEY `status_id` (`status_id`);

--
-- Indexes for table `facilitystatus`
--
ALTER TABLE `facilitystatus`
  ADD PRIMARY KEY (`status_id`);

--
-- Indexes for table `facilitytypes`
--
ALTER TABLE `facilitytypes`
  ADD PRIMARY KEY (`type_id`);

--
-- Indexes for table `feedback`
--
ALTER TABLE `feedback`
  ADD PRIMARY KEY (`feedback_id`),
  ADD UNIQUE KEY `booking_id` (`booking_id`);

--
-- Indexes for table `role`
--
ALTER TABLE `role`
  ADD PRIMARY KEY (`role_id`);

--
-- Indexes for table `userprofile`
--
ALTER TABLE `userprofile`
  ADD PRIMARY KEY (`profile_id`),
  ADD KEY `user_id` (`user_id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`user_id`),
  ADD KEY `role_id` (`role_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `booking`
--
ALTER TABLE `booking`
  MODIFY `booking_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table `bookingstatus`
--
ALTER TABLE `bookingstatus`
  MODIFY `status_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `facility`
--
ALTER TABLE `facility`
  MODIFY `facility_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `facilitystatus`
--
ALTER TABLE `facilitystatus`
  MODIFY `status_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `facilitytypes`
--
ALTER TABLE `facilitytypes`
  MODIFY `type_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `feedback`
--
ALTER TABLE `feedback`
  MODIFY `feedback_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `userprofile`
--
ALTER TABLE `userprofile`
  MODIFY `profile_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `user_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `booking`
--
ALTER TABLE `booking`
  ADD CONSTRAINT `booking_ibfk_1` FOREIGN KEY (`facility_id`) REFERENCES `facility` (`facility_id`),
  ADD CONSTRAINT `booking_ibfk_2` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`),
  ADD CONSTRAINT `booking_ibfk_3` FOREIGN KEY (`status_id`) REFERENCES `bookingstatus` (`status_id`);

--
-- Constraints for table `facility`
--
ALTER TABLE `facility`
  ADD CONSTRAINT `facility_ibfk_1` FOREIGN KEY (`added_by`) REFERENCES `users` (`user_id`),
  ADD CONSTRAINT `facility_ibfk_2` FOREIGN KEY (`type_id`) REFERENCES `facilitytypes` (`type_id`),
  ADD CONSTRAINT `facility_ibfk_3` FOREIGN KEY (`status_id`) REFERENCES `facilitystatus` (`status_id`);

--
-- Constraints for table `feedback`
--
ALTER TABLE `feedback`
  ADD CONSTRAINT `feedback_ibfk_1` FOREIGN KEY (`booking_id`) REFERENCES `booking` (`booking_id`);

--
-- Constraints for table `userprofile`
--
ALTER TABLE `userprofile`
  ADD CONSTRAINT `userprofile_ibfk_1` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`);

--
-- Constraints for table `users`
--
ALTER TABLE `users`
  ADD CONSTRAINT `users_ibfk_1` FOREIGN KEY (`role_id`) REFERENCES `role` (`role_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
