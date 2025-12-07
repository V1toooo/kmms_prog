#pragma once
#include "menu.hpp"

MenuItem* show_menu (MenuItem* current);
MenuItem* exit_func (MenuItem* current);
MenuItem* study_go_back_func (MenuItem* current);

MenuItem* algebra_summ_func (MenuItem* current);
MenuItem* algebra_substract_func (MenuItem* current);
MenuItem* algebra_multiply_func (MenuItem* current);
MenuItem* algebra_divide_func (MenuItem* current);
MenuItem* algebra_go_back_func (MenuItem* current);

MenuItem* analysis_dif_func (MenuItem* current);
MenuItem* analysis_int_func (MenuItem* current);
MenuItem* analysis_go_back_func (MenuItem* current);