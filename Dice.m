#import "Dice.h"

@implementation Dice
- (instancetype)init
{
    self = [super init];
    if (self)
    {
        _currentNumber = [self randomize];
    }
    return self;
}

- (NSNumber*) randomize
{
    return @(arc4random_uniform(6)+1);
}
@end
