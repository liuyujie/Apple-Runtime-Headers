//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MTLDrawable <NSObject>
@property(readonly, nonatomic) unsigned int drawableID;
@property(readonly, nonatomic) double presentedTime;
- (void)addPresentedHandler:(void (^)(id <MTLDrawable>))arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (void)present;
@end

