//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SFAnimatedLockButton, SFAuthorization;

__attribute__((visibility("hidden")))
@interface SFAuthorizationView_ivars : NSObject
{
    SFAnimatedLockButton *_button;
    NSButton *_textButton;
    NSString *_textButtonString;
    NSMutableArray *_constraints;
    CDStruct_166d2db6 *_authorizationRights;
    SFAuthorization *_authorization;
    id _delegate;
    int _currentState;
    BOOL _authorized;
    double _timeInterval;
    unsigned int _flags;
    BOOL _initiallyLockedOrHidden;
    NSDictionary *_textAttributes;
    BOOL _asyncOperation;
    NSObject<OS_dispatch_queue> *_interactiveHandlingQueue;
    BOOL _initialized;
}

- (void)dealloc;

@end
