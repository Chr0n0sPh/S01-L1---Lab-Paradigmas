-- Inicializando a table
numeros = {}

-- Preenchendo a table com valores aleatórios entre 1 e 1000
for i = 1, 100, 1 do
    numeros[i] = math.random(1, 10000)
end

-- Contando os números pares
cont = 0
for i = 1, 100, 1 do
    if numeros[i] % 2 == 0 then
        cont = cont + 1
    end
end

-- Exibindo o resultado
print("Quantidade de numeros pares: " .. cont)
