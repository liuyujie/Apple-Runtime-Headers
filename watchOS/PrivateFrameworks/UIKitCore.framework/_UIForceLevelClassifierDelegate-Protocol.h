//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _UIForceLevelClassifier;

@protocol _UIForceLevelClassifierDelegate <NSObject>
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(int)arg2;

@optional
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(float)arg2 toForceLevel:(int)arg3;
@end

