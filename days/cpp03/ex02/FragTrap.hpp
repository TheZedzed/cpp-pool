#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		FragTrap&	operator=(const FragTrap&);
		void	highFivesGuys(void);
	private:
};
std::ostream&	operator<<(std::ostream&, const FragTrap&);
#endif
