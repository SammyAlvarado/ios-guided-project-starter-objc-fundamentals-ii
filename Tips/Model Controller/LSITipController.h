//
//  LSITipController.h
//  Tips
//
//  Created by Sammy Alvarado on 11/12/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LSITip;

NS_ASSUME_NONNULL_BEGIN

@interface LSITipController : NSObject

@property (nonatomic, readonly, copy) NSArray<LSITip *> *tips;

@property (nonatomic, readonly) NSUInteger tipCount;

- (LSITip *)tipAtIndex:(NSUInteger)index;

-(void)addTips:(LSITip *)aTip;

@end

NS_ASSUME_NONNULL_END
