<?php
function carregaPergunta($id, $enunciados, $alternativas){
    echo "<h3> {$enunciados[$id]} </h3>";
    echo "<ol type='A'>";
    for($y = 0; $y < count($alternativas[$id]); $y++){
        echo "<li>{$alternativas[$id][$y]} </li>";
    }
    echo "</ol>";
}
$enunciados = [
    "Qual bicho transmite Doença de Chagas?",
    "Qual fruto é conhecido no Norte e Nordeste como jerimum?",
    "Qual é o coletivo de cães?",
    "Qual é o triângulo que tem todos os lados diferentes?",
    "Quem compôs o Hino da Independência?"
];
$alternativas = [
    ["Abelha","Barata","Pulga","Barbeiro"],
    ["Caju", "Abóbora", "Chuchu", "Coco"],
    ["Matilha", "Rebanho", "Alcateia", "Manada"],
    ["Equilátero", "Isóceles", "Escaleno", "Trapézio"],
    ["Dom Pedro I", "Manuel Bandeira", "Castro Alvez", "Carlos Gomes"]
];
$respostas = [3,1,0,2,0];    
?>