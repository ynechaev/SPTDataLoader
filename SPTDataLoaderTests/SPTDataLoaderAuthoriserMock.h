#import <Foundation/Foundation.h>

#import "SPTDataLoaderAuthoriser.h"

@interface SPTDataLoaderAuthoriserMock : NSObject <SPTDataLoaderAuthoriser>

@property (nonatomic, assign, readonly) NSUInteger numberOfCallsToAuthoriseRequest;

@end
