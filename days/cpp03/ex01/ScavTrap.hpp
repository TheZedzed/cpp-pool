#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap(const std::string&);
		ScavTrap&	operator=(const ScavTrap&);
		void	guardGate(void);
	private:

};
std::ostream&	operator<<(std::ostream&, const ScavTrap&);
#endif
