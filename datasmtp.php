<?php
  include "smtp\class.phpmailer.php";

  $mail= new PHPMailer();
  $mail->isSMTP();
  $mail->SMTPDebug = 1;
  $mail->SMTPAuth = true;
  $mail->SMTPSecure = 'tls';
  $mail->Host = 'smtp.sendgrid.net';
  $mail->Port = 587; //587
  $mail->IsHTML(true);
  $mail->CharSet= 'UTF-8';
  $mail->Username = 'programminglife3@gmail.com';
  $mail->Password = 'Mim85530381';
  $mail->SetFrom("programminglife3@gmail.com");
  // $mail->SMTPOptions=array('ssl'=>array(
  //   'verify_peer'=>false,
  //   'verify_peer_name'=>false,
  //   'allow_self_signed'=>false,
  // ));

  //$mail->addAttachment("example.pdf");
  $mail->Subject = 'Hi';
  $mail->Body= 'My name';
  $mail->AddAddress('mimjkkniu.381@gmail.com');

  if (!$mail->Send()) {
    echo "not";
  }else {
    echo "yes";
  }
?>
