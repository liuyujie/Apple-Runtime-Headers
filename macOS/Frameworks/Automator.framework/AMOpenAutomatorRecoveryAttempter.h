//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMOpenAutomatorRecoveryAttempter : NSObject
{
    unsigned long long __recoveryOptionIndex;
}

+ (id)openAutomatorRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long _recoveryOptionIndex; // @synthesize _recoveryOptionIndex=__recoveryOptionIndex;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)_openAutomatorApp;
- (id)initWithRecoveryOptionIndex:(unsigned long long)arg1;

@end
