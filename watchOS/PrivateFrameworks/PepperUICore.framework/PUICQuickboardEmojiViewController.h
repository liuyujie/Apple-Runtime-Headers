//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/PUICQuickboardModalNavigationContainerController.h>

#import "PUICQuickboardController.h"
#import "PUICQuickboardPickerViewDelegate.h"
#import "PUICRecentEmojiViewDelegate.h"
#import "PUICRecentsViewDelegate.h"

@class NSString, PUICQuickboardLanguageController, PUICQuickboardPunchoutView, UIButton;

@interface PUICQuickboardEmojiViewController : PUICQuickboardModalNavigationContainerController <PUICRecentEmojiViewDelegate, PUICRecentsViewDelegate, PUICQuickboardPickerViewDelegate, PUICQuickboardController>
{
    _Bool _supportsRecentItemPayloads;
    unsigned int _quickboardType;
    id <PUICQuickboardEmojiViewControllerDelegate> _emojiViewControllerDelegate;
    id <PUICQuickboardViewControllerDelegate> _delegate;
    PUICQuickboardLanguageController *_languageController;
    unsigned int _dismissMode;
    unsigned int _confirmationType;
    UIButton *_acceptButton;
    PUICQuickboardPunchoutView *_punchoutView;
}

+ (void)resetLastSelectedEmojiTypeForTesting;
@property(retain, nonatomic) PUICQuickboardPunchoutView *punchoutView; // @synthesize punchoutView=_punchoutView;
@property(readonly, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) unsigned int confirmationType; // @synthesize confirmationType=_confirmationType;
@property(nonatomic) unsigned int dismissMode; // @synthesize dismissMode=_dismissMode;
@property(retain, nonatomic) PUICQuickboardLanguageController *languageController; // @synthesize languageController=_languageController;
@property(nonatomic) __weak id <PUICQuickboardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUICQuickboardEmojiViewControllerDelegate> emojiViewControllerDelegate; // @synthesize emojiViewControllerDelegate=_emojiViewControllerDelegate;
@property(nonatomic) unsigned int quickboardType; // @synthesize quickboardType=_quickboardType;
@property(nonatomic) _Bool supportsRecentItemPayloads; // @synthesize supportsRecentItemPayloads=_supportsRecentItemPayloads;
- (void).cxx_destruct;
- (void)selectEmojiForTesting;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool animatesSelectionToDestinationView;
- (void)createFallbackLanguageController;
@property(readonly, nonatomic) NSString *primaryLanguage;
@property(readonly, nonatomic) unsigned int inputType;
- (void)recentEmojiView:(id)arg1 didSelectEmojiString:(id)arg2;
- (void)recentEmojiView:(id)arg1 didSelectEmojiCategory:(id)arg2;
@property(readonly, nonatomic) _Bool supportsAnimatedEmoji; // @dynamic supportsAnimatedEmoji;
- (void)pickerViewDidSelectItem:(id)arg1 preview:(id)arg2;
- (void)recentStickersView:(id)arg1 didSelectSticker:(id)arg2 preview:(id)arg3;
- (void)activate;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

