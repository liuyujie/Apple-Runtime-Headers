//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject
{
    CLSCurrentUser *_currentUser;
}

+ (id)shared;
- (void).cxx_destruct;
- (_Bool)settingsUIVisible;
- (_Bool)hasSupportedRole;
- (_Bool)hasCapableAccount;
- (id)currentUser;
- (void)currentUserChanged;
- (void)dealloc;
- (id)init;

@end
