//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LUI2AuthHintViewController, LUI2BackgroundViewController, LUI2ButtonViewController, LUI2MessageViewController, LUI2MultiWindowController, LUI2PasswordViewController, LUI2PopupButtonViewController, LUI2SpinnerViewController, LUI2StatusViewController, LUI2UserListViewController, LUI2UserNameViewController, LUI2UserViewController, LUIPopoverController;

@interface LUI2LWUIController : NSObject
{
    BOOL _enabledInternal;
    LUI2MultiWindowController *_multiWindowController;
    LUI2AuthHintViewController *_authHintViewController;
    LUI2ButtonViewController *_buttonViewController;
    LUI2MessageViewController *_messageViewController;
    LUI2PasswordViewController *_passwordViewController;
    LUI2PopupButtonViewController *_popupButtonViewController;
    LUI2SpinnerViewController *_spinnerViewController;
    LUI2StatusViewController *_statusViewController;
    LUI2UserListViewController *_userListViewController;
    LUI2UserNameViewController *_userNameViewController;
    LUI2UserViewController *_userViewController;
    LUIPopoverController *_popover;
}

@property(retain) LUIPopoverController *popover; // @synthesize popover=_popover;
@property BOOL enabledInternal; // @synthesize enabledInternal=_enabledInternal;
@property(readonly) LUI2UserViewController *userViewController; // @synthesize userViewController=_userViewController;
@property(readonly) LUI2UserNameViewController *userNameViewController; // @synthesize userNameViewController=_userNameViewController;
@property(readonly) LUI2UserListViewController *userListViewController; // @synthesize userListViewController=_userListViewController;
@property(readonly) LUI2StatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(readonly) LUI2SpinnerViewController *spinnerViewController; // @synthesize spinnerViewController=_spinnerViewController;
@property(readonly) LUI2PopupButtonViewController *popupButtonViewController; // @synthesize popupButtonViewController=_popupButtonViewController;
@property(readonly) LUI2PasswordViewController *passwordViewController; // @synthesize passwordViewController=_passwordViewController;
@property(readonly) LUI2MessageViewController *messageViewController; // @synthesize messageViewController=_messageViewController;
@property(readonly) LUI2ButtonViewController *buttonViewController; // @synthesize buttonViewController=_buttonViewController;
@property(readonly) LUI2AuthHintViewController *authHintViewController; // @synthesize authHintViewController=_authHintViewController;
@property(readonly) LUI2MultiWindowController *multiWindowController; // @synthesize multiWindowController=_multiWindowController;
- (void)dealloc;
- (id)initWithAuthorizationPluginView:(id)arg1;
- (id)init;
@property(readonly) LUI2BackgroundViewController *backgroundViewController;
@property(getter=isEnabled) BOOL enabled; // @dynamic enabled;
- (void)showPopover:(id)arg1;
- (void)shakePopover;
- (void)hidePopover;
- (id)currentPopover;
- (id)_viewForPopover:(int)arg1;
- (void)_setupLWUIControllerWithAuthorizationPluginView:(id)arg1;

@end

