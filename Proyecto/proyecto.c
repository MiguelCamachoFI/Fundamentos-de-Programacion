INICIO
	ESCRIBIR PANTALLA PRINCIPAL

	SI hay una partida guardada ENTONCES
		Cargar partida
	FIN SI
	DE LO CONTRARIO
		crear nueva partida
	FIN DE LO CONTRARIO

	"Game Loop principal"
	
	SI el juego está pausado ENTONCES
		detener el juego
	FIN SI
	DE LO CONTRARIO
		regresar al game loop principal
	FIN DE LO CONTRARIO

	ESCRIBIR desbloquedo de siguiente nivel

	SI el jugador desea continuar ENTONCES
		regresar al game loop principal
	FIN SI
	DE LO CONTRARIO
		llevar a la siguiente pantalla
	FIN DE LO CONTRARIO

	ESCRIBIR ¿Se ha oprimido salir?

	SI el jugador oprimer salir ENTONCES
		salir del juego
	FIN SI
	DE LO CONTRARIO
		regresar al game loop principal
	FIN DE LO CONTRARIO	
FIN