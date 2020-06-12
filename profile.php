<?php
session_start();
if (!isset($_SESSION['YES'])) {
  header('location: login.php');
  die();
}else {
  ?>
  Welcome user <br>
  <a href="logout.php" style="color: red">Logout</a>
  <?php
} ?>
