class Unit{
	private:
		char state;

	public:
		Unit(){
			state = ' ';
		}

		void change_state(char new_state){
			if(state == ' ')
				state = new_state;
		}
};