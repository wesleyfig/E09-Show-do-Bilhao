<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=, initial-scale=1.0">
    <title>Show do Bilhão</title>
</head>
<body>
    <?php
    include "partials/perguntas.inc"; 
    carregaPergunta(($_GET["id"]), $enunciados, $alternativas);
    ?>
</body>
</html>