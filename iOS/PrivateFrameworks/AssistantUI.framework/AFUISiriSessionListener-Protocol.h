//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUISiriSessionInfo;

@protocol AFUISiriSessionListener <NSObject>

@optional
- (void)siriSessionDidUpdateSessionInfo:(AFUISiriSessionInfo *)arg1;
- (void)siriSessionDidInitializeSessionInfo:(AFUISiriSessionInfo *)arg1;
@end
