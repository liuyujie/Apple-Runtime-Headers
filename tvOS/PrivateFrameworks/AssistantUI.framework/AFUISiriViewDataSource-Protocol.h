//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAccount, AFUISiriView, NSString;

@protocol AFUISiriViewDataSource <NSObject>

@optional
- (long long)userAccountCountForSiriView:(AFUISiriView *)arg1;
- (AFAccount *)activeAccountForSiriView:(AFUISiriView *)arg1;
- (NSString *)assistantVersionForSiriView:(AFUISiriView *)arg1;
@end

