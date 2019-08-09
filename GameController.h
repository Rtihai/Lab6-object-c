#import <Foundation/Foundation.h>
#import "Dice.h"

@interface GameController : NSObject

-(void)holdDie:(NSInteger)input;
-(void)reset;
-(void)score;
-(void)resetLowestScore;
-(void)quit;
@property NSNumber *lowestScore;
@property NSNumber *numberOfRoll;
@property NSMutableArray <Dice *> *setOfDice;
@property NSMutableArray *holdRoll;

@end
