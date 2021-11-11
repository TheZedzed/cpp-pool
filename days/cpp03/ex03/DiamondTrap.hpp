#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap&);
		DiamondTrap(const std::string&);
		DiamondTrap&	operator=(const DiamondTrap&);
		void	whoAmi(void) const;
	private:
		std::string	_name;
};
std::ostream&	operator<<(std::ostream&, const DiamondTrap&);
#endif
