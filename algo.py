palabra_oculta = "juego"
intentos = 10
intentos_realizados = 0
palabra_clave = '_' * len(palabra_oculta)

while intentos_realizados < intentos and palabra_clave != palabra_oculta:
    print("Palabra Adivinada:", palabra_clave)
    letra = input("Ingrese una Letra: ")

    palabra_clave = ''.join(letra if palabra_oculta[i] == letra else palabra_clave[i] for i in range(len(palabra_oculta)))
    intentos_realizados += 1

if palabra_clave == palabra_oculta:
    print("¡FELICIDADES! GANASTE, ERES MUY BUENO:", palabra_clave)
else:
    print("HAS PERDIDO. TUS 10 INTENTOS SE AGOTARON. SIGUE PARTICIPANDO. La palabra era:", palabra_oculta)
