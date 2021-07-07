class Unit{
	private:
		char state;

	public:
		Unit(){
			state = ' ';
		}

		void changeState(char newState){
			if(state == ' ')
				state = newState;
		}

		char getState(){
			return state;
		}
};