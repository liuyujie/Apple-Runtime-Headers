//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, _UIBackdropViewSettings;

@interface CKUITheme : NSObject
{
    int _HUDStyle;
    UIColor *_darkAppTintColor;
    int _businessStatusBarStyle;
    UIColor *_transcriptNavBarTextColor;
    UIColor *_detailsCellStaticTextColor;
}

@property(readonly, nonatomic) UIColor *detailsCellStaticTextColor; // @synthesize detailsCellStaticTextColor=_detailsCellStaticTextColor;
@property(readonly, nonatomic) UIColor *transcriptNavBarTextColor; // @synthesize transcriptNavBarTextColor=_transcriptNavBarTextColor;
@property(readonly, nonatomic) int businessStatusBarStyle; // @synthesize businessStatusBarStyle=_businessStatusBarStyle;
@property(readonly, nonatomic) UIColor *darkAppTintColor; // @synthesize darkAppTintColor=_darkAppTintColor;
@property(nonatomic) int HUDStyle; // @synthesize HUDStyle=_HUDStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *syncProgressUserActionButtonTextColor;
@property(readonly, nonatomic) UIColor *syncProgressUserMessageColor;
@property(readonly, nonatomic) UIColor *syncProgressLabelColor;
- (int)navBarTextStyleForBusinessChat:(id)arg1;
- (int)statusBarStyleForBusinessChat:(id)arg1;
- (id)secondaryBrandColorForBusinessChat:(id)arg1;
- (id)primaryBrandColorForBusinessChat:(id)arg1;
@property(readonly, nonatomic) UIColor *businessInfoViewDescriptionTextColor;
@property(readonly, nonatomic) UIColor *businessDescriptionViewControllerBackgroundColor;
@property(readonly, nonatomic) UIColor *fsmPickerCurrentPageColor;
@property(readonly, nonatomic) UIColor *fsmPickerTextColor;
@property(readonly, nonatomic) UIColor *stickerDetailsSubheaderTextColor;
@property(readonly, nonatomic) float browserAppStripLightPluginCellOpacity;
@property(readonly, nonatomic) float browserAppStripDimmedPluginCellOpacity;
@property(readonly, nonatomic) UIColor *browserAppStripSeperatorBorderColor;
@property(readonly, nonatomic) UIColor *browserAppStripSeperatorBackgroundColor;
@property(readonly, nonatomic) UIColor *browserSwitcherBorderColor;
@property(readonly, nonatomic) UIColor *browserSwitcherGutterDividerColor;
@property(readonly, nonatomic) UIColor *browserSwitcherGutterColor;
@property(readonly, nonatomic) UIColor *browserLabelColor;
@property(readonly, nonatomic) UIColor *browserContentBackgroundColor;
@property(readonly, nonatomic) UIColor *browserBackgroundColor;
- (id)messageAcknowledgmentSelectedBalloonColorForStyle:(int)arg1;
- (id)messageAcknowledgmentBalloonColorForStyle:(int)arg1;
- (BOOL)messageAcknowledgmentBalloonColorTypeForStyle:(int)arg1;
- (id)messageAcknowledgment:(int)arg1 selectedAcknowledgmentImageColor:(int)arg2;
- (id)messageAcknowledgment:(int)arg1 acknowledgmentImageColor:(int)arg2;
- (BOOL)ckAcknowledgemntColorTypeForColor:(id)arg1;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentWhiteColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentGrayColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentRedColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentBalloonBorderColor;
@property(readonly, nonatomic) UIColor *messageAcknowledgmentPickerBackgroundColor;
@property(readonly, nonatomic) UIColor *activeRecordingDotColor;
@property(readonly, nonatomic) float contactTableViewContactBackgroundAlpha;
@property(readonly, nonatomic) UIColor *contactTableViewCellContentTextColor;
@property(readonly, nonatomic) UIColor *contactTableViewHeaderBackgroundColor;
@property(readonly, nonatomic) UIColor *contactTableViewCellBackgroundColor;
@property(readonly, nonatomic) UIColor *contactsTableViewBackgroundColor;
@property(readonly, nonatomic) UIColor *detailsSegmentedControlBackgroundColor;
@property(readonly, nonatomic) UIColor *sharedContentsCellBackgroundColor;
@property(readonly, nonatomic) UIColor *sharedContentsCellTextColor;
@property(readonly, nonatomic) UIColor *contactCellTextColor;
@property(readonly, nonatomic) UIColor *recipientsDividerColor;
@property(readonly, nonatomic) int detailsBackgroundBlurEffectStyle;
@property(readonly, nonatomic) UIColor *detailsBackgroundColor;
@property(readonly, nonatomic) UIColor *appStripCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldAudioRecordingBalloonColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkTextColor;
@property(readonly, nonatomic) UIColor *entryFieldTextColor;
@property(readonly, nonatomic) UIColor *entryFieldDividerColor;
@property(readonly, nonatomic) UIColor *entryFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillDarkColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverBorderColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldGrayColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkStyleHighlightedButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldDarkStyleButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldHighlightedButtonColor;
@property(readonly, nonatomic) UIColor *entryFieldButtonColor;
- (id)business_sendButtonColor;
- (id)black_sendButtonColor;
- (id)white_sendButtonColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewTransparentBackdropSettings;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewDarkBackdropSettings;
@property(readonly, nonatomic) _UIBackdropViewSettings *entryViewBackdropSettings;
@property(readonly, nonatomic) int keyboardDarkAppearance;
@property(readonly, nonatomic) int keyboardAppearance;
@property(readonly, nonatomic) int entryViewStyle;
@property(readonly, nonatomic) UIColor *searchResultsSeperatorColor;
@property(readonly, nonatomic) UIColor *searchResultsCellSelectedColor;
@property(readonly, nonatomic) UIColor *searchResultsCellBackgroundColor;
@property(readonly, nonatomic) UIColor *searchResultsBackgroundColor;
@property(readonly, nonatomic) UIColor *toFieldTextColor;
@property(readonly, nonatomic) int toFieldBackdropStyle;
- (id)business_recipientTextColor;
- (id)black_recipientTextColor;
- (id)white_recipientTextColor;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)recipientTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *waveformDisabledColor;
@property(readonly, nonatomic) UIColor *waveformUnplayedColor;
- (id)business_progressViewColor;
- (id)black_progressViewColor;
- (id)white_progressViewColor;
- (id)red_progressViewColor;
- (id)siri_progressViewColor;
- (id)blue_progressViewColor;
- (id)green_progressViewColor;
- (id)gray_progressViewColor;
- (id)progressViewColorForColorType:(BOOL)arg1;
- (id)business_waveformColor;
- (id)black_waveformColor;
- (id)white_waveformColor;
- (id)red_waveformColor;
- (id)siri_waveformColor;
- (id)blue_waveformColor;
- (id)green_waveformColor;
- (id)gray_waveformColor;
- (id)waveformColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *attachmentBalloonSubtitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonTitleTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonActionColor;
- (id)business_balloonOverlayColor;
- (id)black_balloonOverlayColor;
- (id)white_balloonOverlayColor;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)business_balloonTextLinkColor;
- (id)black_balloonTextLinkColor;
- (id)white_balloonTextLinkColor;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)business_balloonTextColor;
- (id)black_balloonTextColor;
- (id)white_balloonTextColor;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)business_unfilledBalloonColor;
- (id)black_unfilledBalloonColor;
- (id)white_unfilledBalloonColor;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *jellyfishMuteButtonColor;
@property(readonly, nonatomic) UIColor *autoloopMuteButtonColor;
@property(readonly, nonatomic) UIColor *typingIndicatorDotColor;
- (id)business_balloonColors;
- (id)black_balloonColors;
- (id)white_balloonColors;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
@property(readonly, nonatomic) int transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) UIColor *transcriptDeemphasizedTextColor;
@property(readonly, nonatomic) UIColor *transcriptBigEmojiColor;
@property(readonly, nonatomic) UIColor *transcriptTextColor;
@property(readonly, nonatomic) UIColor *transcriptBackgroundColor;
@property(readonly, nonatomic) UIColor *progressBarTrackTintColor;
@property(readonly, nonatomic) UIColor *transcriptSeparatorColor;
@property(readonly, nonatomic) UIColor *conversationListGroupCountColor;
@property(readonly, nonatomic) UIColor *conversationListLargeTextDateColor;
@property(readonly, nonatomic) UIColor *conversationListDateColor;
@property(readonly, nonatomic) UIColor *conversationListSummaryColor;
@property(readonly, nonatomic) UIColor *conversationListSenderColor;
@property(readonly, nonatomic) UIColor *conversationListSeperatorColor;
@property(readonly, nonatomic) UIColor *conversationListSelectedCellColor;
@property(readonly, nonatomic) UIColor *conversationListCellColor;
@property(readonly, nonatomic) UIColor *conversationListBackgroundColor;
@property(readonly, nonatomic) int scrollIndicatorStyle;
@property(readonly, nonatomic) int appManagerStatusBarStyle;
@property(readonly, nonatomic) int statusBarStyle;
@property(readonly, nonatomic) int defaultBarStyle;
@property(readonly, nonatomic) int navBarStyle;
@property(readonly, nonatomic) UIColor *notificationSubtitleColor;
@property(readonly, nonatomic) UIColor *grayTextColor;
@property(readonly, nonatomic) UIColor *lightGrayColor;
@property(readonly, nonatomic) UIColor *messagesControllerBackgroundColor;
@property(readonly, nonatomic) UIColor *segmentedControlSelectionTintColor;
@property(readonly, nonatomic) UIColor *appTintColor;

@end
