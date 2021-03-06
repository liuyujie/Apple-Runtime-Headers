//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICQuickboardMessageViewController.h"

#import "CKNanoReplyViewControllerProtocol.h"

@class CKConversation, CKNanoSendController, NSNumber, NSString, UIViewController;

@interface CKNanoReplyViewController : PUICQuickboardMessageViewController <CKNanoReplyViewControllerProtocol>
{
    id <CKNanoReplyViewControllerDismissalDelegate> _dismissalDelegate;
    CDUnknownBlockType _messageForReplyBlock;
    NSString *_smartReplyContext;
    NSString *_breadcrumbText;
    CKConversation *_conversation;
    CKNanoSendController *_sendController;
    CKNanoReplyViewController *_keepAlive;
    UIViewController *_originalPresentingViewController;
}

@property(nonatomic) __weak UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property(retain, nonatomic) CKNanoReplyViewController *keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) CKNanoSendController *sendController; // @synthesize sendController=_sendController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSString *breadcrumbText; // @synthesize breadcrumbText=_breadcrumbText;
@property(copy, nonatomic) NSString *smartReplyContext; // @synthesize smartReplyContext=_smartReplyContext;
@property(copy, nonatomic) CDUnknownBlockType messageForReplyBlock; // @synthesize messageForReplyBlock=_messageForReplyBlock;
@property(nonatomic) __weak id <CKNanoReplyViewControllerDismissalDelegate> dismissalDelegate; // @synthesize dismissalDelegate=_dismissalDelegate;
- (void).cxx_destruct;
- (void)primaryLanguageDidChange:(id)arg1;
- (void)didSelectListItem:(int)arg1;
- (void)updateTrayButtonsBackgroundColor;
- (void)conversationPreferredServiceChanged:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDictationMode;
- (void)loadSmartReplies;
- (void)cleanupState;
- (void)viewDidAppear:(_Bool)arg1;
- (id)MSMessageForSelectedReply:(id)arg1 bundleID:(id *)arg2;
- (id)initWithRecipients:(id)arg1 allowRetargeting:(_Bool)arg2;
- (id)initWithRecipients:(id)arg1;
- (id)initForChatController:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithDelegate:(id)arg1 dictationMode:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSNumber *messageItemListNumber;

@end

