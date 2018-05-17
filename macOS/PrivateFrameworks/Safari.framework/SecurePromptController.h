//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SecureUI.h"

@class NSAlert, NSArray, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface SecurePromptController : NSObject <SecureUI>
{
    NSString *_messageText;
    NSString *_informativeText;
    NSArray *_buttonTitles;
    NSAlert *_alert;
    BOOL _hasReceivedUntrustedEvents;
    BOOL _runningUnderSecureUIEventSanitizer;
}

@property(nonatomic) BOOL runningUnderSecureUIEventSanitizer; // @synthesize runningUnderSecureUIEventSanitizer=_runningUnderSecureUIEventSanitizer;
@property(nonatomic) BOOL hasReceivedUntrustedEvents; // @synthesize hasReceivedUntrustedEvents=_hasReceivedUntrustedEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSWindow *window;
- (long long)runModalWithEventSanitizer:(id)arg1;
- (id)init;
- (id)initWithMessageText:(id)arg1 informativeText:(id)arg2 buttonTitles:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
