//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKMessageEntryViewLayoutMetrics, CKUITheme, NSArray, NSAttributedString, NSDateFormatter, NSDictionary, NSParagraphStyle, NSString, UIActivityIndicatorView, UIFont, UIImage;

@interface CKUIBehavior : NSObject
{
    int _HUDStyle;
    Class _navigationBarClass;
    Class _chatControllerClass;
    Class _businessChatControllerClass;
    UIImage *_emojiReplyImage;
    UIImage *_dictationReplyImage;
    UIImage *_messageReplyImage;
    UIImage *_digitalTouchReplyImage;
    UIImage *_arouetReplyImage;
    UIImage *_surfReplyImage;
    float _waveformMaxWidth;
    float _welcomeViewContentViewLeadingAnchorLayoutConstraintConstant;
    float _welcomeViewContentViewTopAnchorLayoutConstraintConstant;
    float _whatsNewViewBulletPointSymbolLeadingAnchorLayoutConstraintConstant;
    float _whatsNewViewBulletPointTextTrailingAnchorLayoutConstraintConstant;
    UIImage *_whatsNewViewApplePayImage;
}

+ (id)fontWithStyle:(id)arg1 adjustedForMaxSizeCategory:(id)arg2;
+ (id)orderedContentSizeCategories;
+ (id)sharedBehaviors;
@property(readonly, nonatomic) UIImage *whatsNewViewApplePayImage; // @synthesize whatsNewViewApplePayImage=_whatsNewViewApplePayImage;
@property(readonly, nonatomic) float whatsNewViewBulletPointTextTrailingAnchorLayoutConstraintConstant; // @synthesize whatsNewViewBulletPointTextTrailingAnchorLayoutConstraintConstant=_whatsNewViewBulletPointTextTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) float whatsNewViewBulletPointSymbolLeadingAnchorLayoutConstraintConstant; // @synthesize whatsNewViewBulletPointSymbolLeadingAnchorLayoutConstraintConstant=_whatsNewViewBulletPointSymbolLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) float welcomeViewContentViewTopAnchorLayoutConstraintConstant; // @synthesize welcomeViewContentViewTopAnchorLayoutConstraintConstant=_welcomeViewContentViewTopAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) float welcomeViewContentViewLeadingAnchorLayoutConstraintConstant; // @synthesize welcomeViewContentViewLeadingAnchorLayoutConstraintConstant=_welcomeViewContentViewLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) float waveformMaxWidth; // @synthesize waveformMaxWidth=_waveformMaxWidth;
@property(readonly, nonatomic) UIImage *surfReplyImage; // @synthesize surfReplyImage=_surfReplyImage;
@property(readonly, nonatomic) UIImage *arouetReplyImage; // @synthesize arouetReplyImage=_arouetReplyImage;
@property(readonly, nonatomic) UIImage *digitalTouchReplyImage; // @synthesize digitalTouchReplyImage=_digitalTouchReplyImage;
@property(readonly, nonatomic) UIImage *messageReplyImage; // @synthesize messageReplyImage=_messageReplyImage;
@property(readonly, nonatomic) UIImage *dictationReplyImage; // @synthesize dictationReplyImage=_dictationReplyImage;
@property(readonly, nonatomic) UIImage *emojiReplyImage; // @synthesize emojiReplyImage=_emojiReplyImage;
@property(readonly, nonatomic) Class businessChatControllerClass; // @synthesize businessChatControllerClass=_businessChatControllerClass;
@property(readonly, nonatomic) Class chatControllerClass; // @synthesize chatControllerClass=_chatControllerClass;
@property(readonly, nonatomic) Class navigationBarClass; // @synthesize navigationBarClass=_navigationBarClass;
@property(nonatomic) int HUDStyle; // @synthesize HUDStyle=_HUDStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *syncProgressLabelFont;
@property(readonly, nonatomic) UIFont *businessDescriptionVCTextViewFont;
@property(readonly, nonatomic) UIFont *businessInfoViewTitleLabelFont;
@property(readonly, nonatomic) UIFont *businessInfoViewDescriptionTextFont;
@property(readonly, nonatomic) _Bool shouldPopoverSuggestionsBanner;
@property(readonly, nonatomic) UIFont *stickerDetailsTimestampFont;
@property(readonly, nonatomic) UIFont *stickerDetailsStickerPackFont;
@property(readonly, nonatomic) UIFont *stickerDetailsSenderFont;
@property(readonly, nonatomic) UIFont *stickerDetailsTitleFont;
- (struct CGSize)stickerSizeScaledWithInitialSize:(struct CGSize)arg1 imageScale:(float)arg2 userScale:(float)arg3 rectifiedScreenScale:(float)arg4 maxWidth:(float)arg5;
@property(readonly, nonatomic) unsigned int stickerScreenScale;
@property(readonly, nonatomic) float dragTranscriptScrollDisplayLinkMaxDelta;
@property(readonly, nonatomic) float dragTranscriptScrollThreshold;
@property(readonly, nonatomic) float dragEdgeLayoutIntentPadding;
@property(readonly, nonatomic) float dragBalloonTailCropWidth;
@property(readonly, nonatomic) float dragBalloonCornerRadius;
@property(readonly, nonatomic) float dragBalloonWidthIncreasedAttractorThreshold;
@property(readonly, nonatomic) float dragBalloonHeightReducedAttractorThreshold;
@property(readonly, nonatomic) float dragPinchGestureScaleFactor;
@property(readonly, nonatomic) UIFont *appLabelFont;
- (struct UIEdgeInsets)pluginBalloonInsetsForMessageFromMe:(_Bool)arg1;
@property(readonly, nonatomic) float browserSwitcherScrollerHeight;
@property(readonly, nonatomic) float chatMagnifiedChromeBottomInset;
@property(readonly, nonatomic) float chatChromeBottomInset;
@property(readonly, nonatomic) float browserSwitcherGutterWidth;
@property(readonly, nonatomic) float browserSwitcherExpandThreshold;
@property(readonly, nonatomic) float browserSwitcherExpandedGrabberHeaderHeight;
@property(readonly, nonatomic) float browserSwitcherCompactGrabberVisibleHeight;
@property(readonly, nonatomic) float browserSwitcherCompactGrabberHeaderHeight;
@property(readonly, nonatomic) float appStripToEntryViewBottomSpace;
@property(readonly, nonatomic) unsigned int suggestedMinimumRecentsCount;
@property(readonly, nonatomic) unsigned int suggestedAppStripLimit;
@property(readonly, nonatomic) unsigned int appIconPrefetchLimit;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentTopName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentMiddleName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackName2;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackName3;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentBottomTopName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentBottomMiddleName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentTopBackgroundName;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackBackgroundName2;
@property(readonly, nonatomic) NSString *aggregateAcknowledgmentStackBackgroundName3;
@property(readonly, nonatomic) NSString *messageAcknowledgmentPickerBarBubbleTailName;
@property(readonly, nonatomic) NSString *messageAcknowledgmentPickerBarBubbleName;
- (id)largeMessageAcknowledgmentPollingImageNameForAcknowledgmentType:(int)arg1;
- (id)messageAcknowledgmentPollingImageNameForAcknowledgmentType:(int)arg1;
- (id)messageAcknowledgmentImageNameForType:(int)arg1;
@property(readonly, nonatomic) NSArray *messageAcknowledgmentPickerBarAcknowledgmentOrder;
@property(readonly, nonatomic) UIFont *messageAcknowledgmentVoteCountFont;
@property(readonly, nonatomic) struct CGSize aggregateAcknowledgmentTranscriptBalloonSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarOffsetFromBalloon;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentPickerBarBubbleStartingOrigin;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarBubbleTailSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarItemViewSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarAcknowledgmentItemBalloonSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarAcknowledgmentImageSize;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentPickerBarSize;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentPickerBarRelativePosition;
@property(readonly, nonatomic) struct CGPoint messageAcknowledgmentTranscriptBalloonRelativePosition;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentTranscriptAcknowledgmentImageSize;
@property(readonly, nonatomic) struct UIEdgeInsets messageAcknowledgmentTranscriptGlyphInset;
@property(readonly, nonatomic) struct CGSize messageAcknowledgmentTranscriptBalloonSize;
- (id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(float)arg1;
@property(readonly, nonatomic) Class acknowledgementPickerBarClass;
@property(readonly, nonatomic) unsigned int messageAcknowledgmentVotingStackSize;
@property(readonly, nonatomic) struct CGSize businessBannerSize;
@property(readonly, nonatomic) UIImage *businessVerifiedImageSmall;
@property(readonly, nonatomic) UIImage *businessVerifiedImageLarge;
@property(readonly, nonatomic) UIImage *whiteA2AckImage;
@property(readonly, nonatomic) UIImage *whiteA1AckImage;
@property(readonly, nonatomic) UIImage *whiteH2AckImage;
@property(readonly, nonatomic) UIImage *whiteH1AckImage;
@property(readonly, nonatomic) UIImage *whiteHaAckImage;
@property(readonly, nonatomic) UIImage *whiteQuestionMarkDotAckImage;
@property(readonly, nonatomic) UIImage *whiteQuestionMarkGlyphAckImage;
@property(readonly, nonatomic) UIImage *whiteExclamationLeftAckImage;
@property(readonly, nonatomic) UIImage *whiteExclamationRightAckImage;
@property(readonly, nonatomic) UIImage *whiteThumbsDownAckImage;
@property(readonly, nonatomic) UIImage *whiteThumbsUpAckImage;
@property(readonly, nonatomic) UIImage *redHeartAckImage;
@property(readonly, nonatomic) UIImage *grayA2AckImage;
@property(readonly, nonatomic) UIImage *grayH2AckImage;
@property(readonly, nonatomic) UIImage *grayA1AckImage;
@property(readonly, nonatomic) UIImage *grayH1AckImage;
@property(readonly, nonatomic) UIImage *grayHaAckImage;
@property(readonly, nonatomic) UIImage *grayQuestionMarkDotAckImage;
@property(readonly, nonatomic) UIImage *grayQuestionMarkGlyphAckImage;
@property(readonly, nonatomic) UIImage *grayExclamationRightAckImage;
@property(readonly, nonatomic) UIImage *grayExclamationLeftAckImage;
@property(readonly, nonatomic) UIImage *grayThumbsDownAckImage;
@property(readonly, nonatomic) UIImage *grayThumbsUpAckImage;
@property(readonly, nonatomic) UIImage *grayHeartAckImage;
- (void)prewarmAcknowledgementsImage;
@property(readonly, nonatomic) float bannerAdditionalOffset;
@property(readonly, nonatomic) struct CGSize bannerCellSize;
@property(readonly, nonatomic) UIFont *avatarNameFont;
@property(readonly, nonatomic) UIFont *avatarStackTitleFont;
@property(readonly, nonatomic) float avatarPancakeOffset;
@property(readonly, nonatomic) struct CGSize avatarCutoutSize;
@property(readonly, nonatomic) float avatarContactImageNameMargin;
@property(readonly, nonatomic) float avatarNameWidth;
@property(readonly, nonatomic) float avatarSpacingMargin;
@property(readonly, nonatomic) struct CGSize avatarSize;
@property(readonly, nonatomic) UIFont *headerFont;
@property(readonly, nonatomic) UIFont *locationSubtitleFont;
@property(readonly, nonatomic) UIFont *recipientNameFont;
@property(readonly, nonatomic) UIFont *nameFieldFont;
@property(readonly, nonatomic) _Bool shouldAlignRecipientGlyphsWithMargins;
@property(readonly, nonatomic) UIFont *whatsNewViewDescriptionLabelFont;
@property(readonly, nonatomic) UIFont *whatsNewViewBulletPointTextLabelFont;
@property(readonly, nonatomic) UIFont *whatsNewViewBulletPointSymbolLabelFont;
@property(readonly, nonatomic) UIFont *welcomeViewTitleLabelFont;
@property(readonly, nonatomic) UIFont *welcomeViewConfirmButtonFont;
@property(readonly, nonatomic) UIFont *welcomeViewCancelButtonFont;
@property(readonly, nonatomic) float photoPickerMaxPhotoHeight;
- (float)photoPickerMaxPopoverPhotoHeight;
- (float)photoPickerMaxZoomedPhotoHeightForAlertWidth:(float)arg1;
- (float)photoPickerMaxPhotoWidthForAlertWidth:(float)arg1;
@property(readonly, nonatomic) _Bool photoPickerUsesVitality;
@property(readonly, nonatomic) _Bool photoPickerShouldZoomOnSelection;
@property(readonly, nonatomic) UIImage *photoPickerDisabledBadge;
@property(readonly, nonatomic) UIImage *photoPickerOffBadge;
@property(readonly, nonatomic) UIImage *photoPickerOnBadge;
@property(readonly, nonatomic) struct UIEdgeInsets photoPickerSectionInsets;
@property(readonly, nonatomic) float photoPickerInterItemSpacing;
@property(readonly, nonatomic) unsigned int numberOfAssetsInPhotoPicker;
@property(readonly, nonatomic) unsigned int numberOfButtonsInPhotoPicker;
@property(readonly, nonatomic) float photoPickerPopoverWidth;
@property(readonly, nonatomic) float attachmentBrowserHeaderLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserFeedLayoutSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserGridSectionInset;
@property(readonly, nonatomic) float attachmentBrowserGridMinimumLineSpacing;
@property(readonly, nonatomic) float attachmentBrowserGridInterItemSpacing;
@property(readonly, nonatomic) struct CGSize attachmentBrowserDefaultSizeForSquare;
@property(readonly, nonatomic) float dividerHeight;
@property(readonly, nonatomic) _Bool detailsSeperatorsFollowLayoutMargins;
@property(readonly, nonatomic) _Bool shouldAnimateGifsInPhotoGrid;
@property(readonly, nonatomic) UIFont *audioHintFont;
@property(readonly, nonatomic) UIFont *characterCountFont;
@property(readonly, nonatomic) float entryViewMaxHandWritingPluginShelfHeight;
@property(readonly, nonatomic) float entryViewMinPluginShelfHeight;
@property(readonly, nonatomic) float entryViewMaxExtensionShelfHeight;
@property(readonly, nonatomic) float entryViewMaxPluginShelfHeight;
@property(readonly, nonatomic) CKMessageEntryViewLayoutMetrics *entryViewlayoutMetrics;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewHorizontalCoverInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewVerticalCoverInsets;
@property(readonly, nonatomic) float entryViewCoverMinHeight;
@property(readonly, nonatomic) float entryFieldCoverLineWidth;
@property(readonly, nonatomic) _Bool entryFieldShouldUseNewPhotoUI;
@property(readonly, nonatomic) _Bool entryFieldShouldUseBackdropView;
@property(readonly, nonatomic) double maxAudioRecordingDuration;
@property(readonly, nonatomic) double minAudioRecordingDuration;
- (float)toFieldPreferredHeight;
@property(readonly, nonatomic) _Bool presentsFullscreenInViewService;
@property(readonly, nonatomic) _Bool shouldRefreshAlternateAddressesSheet;
@property(readonly, nonatomic) _Bool shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
@property(readonly, nonatomic) _Bool shouldShowDisclosureChevronInRecipientAtoms;
@property(readonly, nonatomic) _Bool shouldHomogenizeAtomsForPreferredService;
@property(readonly, nonatomic) UIImage *unmuteButtonImage;
@property(readonly, nonatomic) UIImage *muteButtonImage;
@property(readonly, nonatomic) UIImage *playButtonArrowImage;
@property(readonly, nonatomic) UIImage *playButtonImage;
@property(readonly, nonatomic) UIImage *textDocumentIcon;
@property(readonly, nonatomic) UIImage *errorDocumentIcon;
@property(readonly, nonatomic) UIImage *genericDocumentIcon;
@property(readonly, nonatomic) UIFont *contactAttachmentOrgFont;
@property(readonly, nonatomic) UIFont *contactAttachmentNameFont;
@property(readonly, nonatomic) UIFont *attachmentTextFont;
@property(readonly, nonatomic) UIFont *previewTitleFont;
@property(readonly, nonatomic) float photoSheetVideoIconPadding;
@property(readonly, nonatomic) struct CGSize photoSheetProgressIndicatorSize;
- (float)transcriptWaveformWidthForDuration:(double)arg1;
@property(readonly, nonatomic) unsigned int waveformPowerLevelWidthIncrement;
@property(readonly, nonatomic) unsigned int waveformGapWidth;
@property(readonly, nonatomic) unsigned int waveformPowerLevelWidth;
@property(readonly, nonatomic) float waveformHeight;
- (struct UIEdgeInsets)thumbnailContentAlignmentInsetsForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) float previewTitleBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSizeForWidth:(float)arg1;
- (struct CGSize)thumbnailFillSizeForWidth:(float)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) float contactBalloonOrgBottomSpacing;
@property(readonly, nonatomic) float contactBalloonNameOrgSpacing;
@property(readonly, nonatomic) float contactBalloonTopNameSpacing;
@property(readonly, nonatomic) float contactBalloonHeight;
@property(readonly, nonatomic) float contactBalloonMinWidth;
@property(readonly, nonatomic) float contactBalloonInnerItemSpacing;
@property(readonly, nonatomic) struct CGSize contactImageSize;
@property(readonly, nonatomic) struct CGSize attachmentBalloonSize;
@property(readonly, nonatomic) struct CGSize documentIconSize;
@property(readonly, nonatomic) int playButtonBackdropStyle;
@property(readonly, nonatomic) float waveformMinLinearPowerLevel;
@property(readonly, nonatomic) float waveformMinDbPowerLevel;
@property(readonly, nonatomic) unsigned int waveformMinPowerLevelsCount;
@property(readonly, nonatomic) unsigned int waveformMaxPowerLevelsCount;
@property(readonly, nonatomic) double waveformMaxWidthDuration;
@property(readonly, nonatomic) _Bool supportsPassbookAttachments;
@property(readonly, nonatomic) _Bool playButtonPunchesOutArrow;
@property(readonly, nonatomic) _Bool useSingleLineForContactVCardNames;
@property(readonly, nonatomic) _Bool showsVCalViewer;
@property(readonly, nonatomic) _Bool showsFileSizeInSubtitle;
@property(readonly, nonatomic) _Bool calculatesWidthForAttachmentBalloons;
@property(readonly, nonatomic) _Bool shouldFillAttachmentBalloon;
@property(readonly, nonatomic) Class contactBalloonViewClass;
@property(readonly, nonatomic) Class audioBalloonCellClass;
@property(readonly, nonatomic) Class audioBalloonViewClass;
@property(readonly, nonatomic) Class attachmentViewClass;
- (struct CGSize)locationShareBalloonSizeForWidth:(float)arg1 offerState:(int)arg2;
- (float)locationShareBalloonLabelMaxHeightForOfferState:(int)arg1;
@property(readonly, nonatomic) float locationShareBalloonContactImageDiameter;
- (float)locationShareBalloonAdditionalVertPadding;
@property(readonly, nonatomic) float locationShareBalloonButtonCharge;
@property(readonly, nonatomic) float locationShareBalloonLabelPadding;
@property(readonly, nonatomic) float locationShareBalloonMaxVisibleMapHeight;
@property(readonly, nonatomic) float locationShareBalloonButtonHeight;
- (struct CGSize)locationOfferMapThumbnailFillSizeForWidth:(float)arg1;
- (id)imageNameForBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (id)imageNameForBalloonDescriptorWithStrokedStyle:(struct CKBalloonDescriptor_t)arg1;
- (id)imageNameForBalloonDescriptorWithFilledStyle:(struct CKBalloonDescriptor_t)arg1;
- (id)business_chevronImage;
- (id)black_chevronImage;
- (id)white_chevronImage;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
- (id)roundBalloonName;
- (id)impactSkinnyBalloonName;
- (id)impactBalloonName;
@property(readonly, nonatomic) NSString *strokedTaillessBalloonName;
@property(readonly, nonatomic) NSString *strokedBalloonName;
@property(readonly, nonatomic) NSString *skinnyTaillessBalloonName;
@property(readonly, nonatomic) NSString *skinnyBalloonName;
@property(readonly, nonatomic) NSString *taillessBallonName;
@property(readonly, nonatomic) NSString *balloonName;
@property(readonly, nonatomic) NSParagraphStyle *balloonParagraphStyle;
@property(readonly, nonatomic) UIFont *audioBalloonTimeFont;
@property(readonly, nonatomic) UIFont *bigEmojiFont;
@property(readonly, nonatomic) UIFont *balloonSubjectFont;
@property(readonly, nonatomic) UIFont *balloonTextFont;
@property(readonly, nonatomic) float horizontalBalloonBadgeInset;
@property(readonly, nonatomic) float verticalBalloonBadgeInset;
@property(readonly, nonatomic) float nanoNoteSenderContentSpace;
@property(readonly, nonatomic) struct UIEdgeInsets audioBalloonAlignmentInsets;
@property(readonly, nonatomic) float audioBalloonProgressInset;
@property(readonly, nonatomic) float audioBalloonTimeInset;
@property(readonly, nonatomic) float audioBalloonWaveformTimeSpace;
- (float)audioBalloonTimeWidthForDuration:(double)arg1;
- (struct UIEdgeInsets)balloonMaskFrameInsetsWithBalloonShape:(BOOL)arg1;
- (struct UIEdgeInsets)balloonMaskFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonLineFragmentInsets;
@property(readonly, nonatomic) float balloonLineFragmentPadding;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTextContainerInset;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsetsWithTailShape:(BOOL)arg1;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsetsWithTailShape:(BOOL)arg1;
@property(readonly, nonatomic) float textAlignmentRectInsetsScaleFactor;
@property(readonly, nonatomic) struct UIEdgeInsets bigEmojiAlignmentRectInsets;
- (struct UIEdgeInsets)taillessAttachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)attachmentBalloonAlignmentRectInsets;
- (struct UIEdgeInsets)bigEmojiBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)taillessBalloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)balloonMaskCapInsetsWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (struct UIEdgeInsets)taillessSkinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)taillessBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)balloonMaskSizeWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;
- (struct CGSize)roundBalloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)skinnyBalloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)balloonMaskSizeWithTailShape:(BOOL)arg1;
- (struct CGSize)balloonMaskTailSizeForTailShape:(BOOL)arg1;
@property(readonly, nonatomic) float extensionBalloonMaximumHeight;
- (struct UIEdgeInsets)extensionBalloonContentInsetsForOrientation:(BOOL)arg1;
- (struct CGRect)extensionIconBadgeRectForOrientation:(BOOL)arg1;
- (struct CGSize)taillessSkinnyBalloonMaskSize;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)taillessBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
@property(readonly, nonatomic) float skinnyBalloonWidthDifference;
- (float)balloonMaskTailHeight;
- (float)balloonMaskTailWidth;
@property(readonly, nonatomic) int maxNumExtensionRemoteViewControllers;
@property(readonly, nonatomic) _Bool showsBalloonBadges;
@property(readonly, nonatomic) _Bool opensLocationsInMapsApp;
@property(readonly, nonatomic) _Bool showsPlaceCardForBalloonViewTitleTap;
@property(readonly, nonatomic) _Bool handlesBalloonViewTitleTapsSeparately;
@property(readonly, nonatomic) _Bool showsBalloonChevron;
@property(readonly, nonatomic) _Bool playsInlineVideo;
@property(readonly, nonatomic) _Bool shouldAdjustWidthForSendFailure;
@property(readonly, nonatomic) _Bool hyphenatesTextContent;
@property(readonly, nonatomic) _Bool shouldUseDynamicGradient;
@property(readonly, nonatomic) UIImage *replayImage;
@property(readonly, nonatomic) UIImage *locationShareActionIcon;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderButtonFont;
@property(readonly, nonatomic) UIFont *transcriptJunkHeaderTitleFont;
@property(readonly, nonatomic) NSDictionary *transcriptButtonTextAttributes;
@property(readonly, nonatomic) NSDictionary *drawerTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *datestampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *senderTranscriptTextAttributes;
- (id)breadcrumbTranscriptTextAttributes;
- (id)statusTranscriptBoldTextAttributesForOrientation:(BOOL)arg1;
- (id)statusTranscriptTextAttributesForOrientation:(BOOL)arg1;
- (id)_rightStatusTranscriptBoldTextAttributes;
- (id)_leftStatusTranscriptBoldTextAttributes;
- (id)_rightStatusTranscriptTextAttributes;
- (id)_leftStatusTranscriptTextAttributes;
- (id)transcriptDrawerFont;
@property(readonly, nonatomic) UIFont *transcriptBoldTextFont;
@property(readonly, nonatomic) UIFont *transcriptDateTextFont;
@property(readonly, nonatomic) UIFont *transcriptTextFont;
@property(readonly, nonatomic) float transcriptScrollToBottomThreshold;
@property(readonly, nonatomic) float transcriptJunkHeaderButtonHeight;
- (float)composeBalloonMaxWidthForEntryContentViewWidth:(float)arg1;
- (float)previewBalloonMaxWidthForBalloonMaxWidth:(float)arg1;
- (float)balloonMaxWidthForTranscriptWidth:(float)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldShowPluginButtons:(_Bool)arg3 shouldShowCharacterCount:(_Bool)arg4 shouldCoverSendButton:(_Bool)arg5;
@property(readonly, nonatomic) float balloonMaxWidthPercent;
@property(readonly, nonatomic) float contactPhotoBalloonMargin;
- (float)balloonBalloonTranscriptSpace:(unsigned char)arg1;
@property(readonly, nonatomic) float largeTranscriptSpace;
@property(readonly, nonatomic) float mediumTranscriptSpace;
@property(readonly, nonatomic) float smallTranscriptSpace;
@property(readonly, nonatomic) float bottomTranscriptSpace;
@property(readonly, nonatomic) float topTranscriptSpace;
@property(readonly, nonatomic) float checkmarkHorizontalPadding;
- (void)invalidateTranscriptDrawerWidth;
- (float)transcriptDrawerMaxContentOffsetXForMarginInsets:(struct UIEdgeInsets)arg1;
- (float)transcriptDrawerWidthForMarginInsets:(struct UIEdgeInsets)arg1;
- (float)transcriptDrawerOverlapForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) float transcriptDrawerGestureAcceleration;
- (float)transcriptDrawerSpace;
@property(readonly, nonatomic) struct UIEdgeInsets contactPhotoTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets stampTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets senderTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTranscriptInsets;
@property(readonly, nonatomic) float emojiPreviewMaxWidth;
@property(readonly, nonatomic) float previewMaxWidth;
@property(readonly, nonatomic) struct UIEdgeInsets minTranscriptMarginInsets;
@property(readonly, nonatomic) float transcriptButtonCharge;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptButtonContentEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptCustomStatusImageEdgeInsets;
@property(readonly, nonatomic) float transcriptCustomStatusImagePadding;
@property(readonly, nonatomic) struct CGSize transcriptCustomStatusImageDefaultSize;
@property(readonly, nonatomic) struct CGSize statusSaveButtonTranscriptTextSize;
@property(readonly, nonatomic) NSAttributedString *statusSaveButtonTranscriptText;
@property(readonly, nonatomic) float transcriptBoldTextHeight;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptBoldTextAlignmentInsets;
@property(readonly, nonatomic) float transcriptDrawerContactImagePadding;
@property(readonly, nonatomic) float transcriptDrawerContactImageDiameter;
@property(readonly, nonatomic) float transcriptContactImageDiameter;
@property(readonly, nonatomic) UIActivityIndicatorView *transcriptHeaderIndicatorView;
@property(readonly, nonatomic) int transcriptLoadingIndicatorStyle;
@property(readonly, nonatomic) _Bool supportsContiguousAttachments;
@property(readonly, nonatomic) _Bool scrollToBottomStopsAtTopOfLastBubble;
@property(readonly, nonatomic) _Bool transcriptCanUseOpaqueMask;
@property(readonly, nonatomic) _Bool usesDataDetectorsUI;
@property(readonly, nonatomic) _Bool shouldInsetForStatusBar;
@property(readonly, nonatomic) _Bool timestampsPushBalloons;
@property(readonly, nonatomic) _Bool showsReplyButtonsInTranscript;
@property(readonly, nonatomic) _Bool shouldUseRotisserieScrolling;
@property(readonly, nonatomic) _Bool shouldUseDynamicScrolling;
@property(readonly, nonatomic) _Bool shouldShowContactPhotosInTranscript;
@property(readonly, nonatomic) _Bool supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) _Bool showsLoadMoreItem;
@property(readonly, nonatomic) UIImage *forwardImage;
@property(readonly, nonatomic) UIFont *readerFont;
@property(readonly, nonatomic) float updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) float editingTransitionAnimationDuration;
@property(readonly, nonatomic) float resizeMessageEntryViewAnimationDuration;
@property(readonly, nonatomic) float throwMessageAnimationDuration;
@property(readonly, nonatomic) float scrollInNewMessageAnimationDuration;
@property(readonly, nonatomic) float fadeInBubbleAnimationDuration;
- (float)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) float progressThresholdForTitleUpdateAnimation;
@property(readonly, nonatomic) _Bool shouldSuppressDynamicsOnKeyboardPresentation;
@property(readonly, nonatomic) _Bool shouldHideStatusBarForFullScreenEffects;
@property(readonly, nonatomic) float sendProgressTitleTransitionProgressThreshold;
@property(readonly, nonatomic) _Bool showsProgressInNavigationBar;
@property(readonly, nonatomic) _Bool shouldUseSendAnimation;
@property(readonly, nonatomic) _Bool shouldBackfillTranscript;
@property(readonly, nonatomic) UIImage *defaultWaveformImage;
@property(readonly, nonatomic) UIImage *trashImage;
@property(readonly, nonatomic) UIImage *detailsImage;
@property(readonly, nonatomic) UIImage *readPinnedImage;
@property(readonly, nonatomic) UIImage *unreadPinnedImage;
@property(readonly, nonatomic) UIImage *unreadDNDImage;
@property(readonly, nonatomic) UIImage *readDNDImage;
@property(readonly, nonatomic) UIImage *unreadImage;
@property(readonly, nonatomic) UIFont *conversationListGroupCountFont;
@property(readonly, nonatomic) UIFont *conversationListDateFont;
@property(readonly, nonatomic) UIFont *conversationListSummaryFont;
@property(readonly, nonatomic) UIFont *conversationListGroupSenderFont;
@property(readonly, nonatomic) UIFont *conversationListSenderFont;
@property(readonly, nonatomic) float conversationListMultipleContactsImageDiameter;
@property(readonly, nonatomic) float conversationListContactImageDiameter;
@property(readonly, nonatomic) float conversationListMinimumWidthForHiddenContactImage;
@property(readonly, nonatomic) _Bool showsSegmentedControlForFilteredConversationList;
@property(readonly, nonatomic) _Bool showsConversationListCellChevronImage;
@property(readonly, nonatomic) _Bool hidesUnreadIndicatorWhenEditing;
@property(readonly, nonatomic) _Bool showsNoMessagesDialog;
@property(readonly, nonatomic) _Bool shouldShowSearchBarInConversationList;
@property(readonly, nonatomic) _Bool canShowContactPhotosInConversationList;
@property(readonly, nonatomic) _Bool usesPersistentConversationSelection;
@property(readonly, nonatomic) _Bool selectNewConversationOnDeletion;
@property(readonly, nonatomic) _Bool selectNewConversationOnStateRestore;
@property(readonly, nonatomic) _Bool showPendingInConversationList;
@property(readonly, nonatomic) Class conversationListNavigationControllerClass;
@property(readonly, nonatomic) Class conversationListTableViewClass;
@property(readonly, nonatomic) NSArray *acceptableUTIs;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) unsigned int conversationListCellMaxSummaryLength;
@property(readonly, nonatomic) unsigned int conversationListCellSummaryNumberOfLines;
@property(readonly, nonatomic) float conversationListCellRightMargin;
@property(readonly, nonatomic) float conversationListCellLargeTextLeftMargin;
@property(readonly, nonatomic) float conversationListCellLeftMargin;
@property(readonly, nonatomic) struct UIEdgeInsets conversationListFilterSegmentInset;
@property(readonly, nonatomic) float conversationListEditingTableMarginWidth;
@property(readonly, nonatomic) float conversationListTableMarginWidth;
@property(readonly, nonatomic) _Bool conversationListCellUsesLargeTextLayout;
@property(readonly, nonatomic) float conversationListCellBackgroundPadding;
@property(readonly, nonatomic) float summaryDateConversationListSpace;
@property(readonly, nonatomic) float senderSummaryConversationListSpace;
@property(readonly, nonatomic) float accessibilityBottomConversationListSpace;
@property(readonly, nonatomic) float bottomConversationListSpace;
@property(readonly, nonatomic) float largeTextTopConversationListSpace;
@property(readonly, nonatomic) float topConversationListSpace;
- (float)conversationListSummaryBodyLeading;
- (float)conversationListSenderBodyLeading;
@property(readonly, nonatomic) struct UIEdgeInsets landscapeKeyboardInsets;
@property(readonly, nonatomic) float maxTranscriptPortraitHeight;
@property(readonly, nonatomic) float maxTranscriptPortraitWidth;
- (float)maxPrimaryColumnWidthForInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) float maxPrimaryColumnWidth;
@property(readonly, nonatomic) _Bool showMMSSetup;
@property(readonly, nonatomic) float maxHorizontalDragVelocityToStartReorderingDrawerPlugins;
@property(readonly, nonatomic) struct CGSize appIconSize;
@property(readonly, nonatomic) unsigned int maxNumberOfItemsPerAppDrawerPage;
@property(readonly, nonatomic) unsigned int maxNumLiveBrowserViewsToKeepInViewHierarchy;
@property(readonly, nonatomic) _Bool isRunningInStoreDemoMode;
@property(readonly, nonatomic) _Bool photosIsWhitelisted;
@property(readonly, nonatomic) _Bool cameraIsWhitelisted;
@property(readonly, nonatomic) _Bool mailIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) _Bool phoneIsWhitelisted;
@property(readonly, nonatomic) float actionMenuWindowLevel;
@property(readonly, nonatomic) float videoControllerWindowLevel;
@property(readonly, nonatomic) float presentationControllerWindowLevel;
@property(readonly, nonatomic) _Bool canAccessPhotos;
@property(readonly, nonatomic) _Bool canAccessContacts;
@property(readonly, nonatomic) NSDateFormatter *timestampDateFormatter;
@property(readonly, nonatomic) unsigned int commonRepliesLoadLimit;
@property(readonly, nonatomic) unsigned int conversationCacheSize;
@property(readonly, nonatomic) unsigned int initialConversationSizingMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
- (unsigned int)minBalloonsForTranscriptHeight;
@property(readonly, nonatomic) unsigned int defaultConversationLoadMoreCount;
@property(readonly, nonatomic) unsigned int initialConversationViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldSizeInitialViewingMessageCount;
@property(readonly, nonatomic) _Bool shouldLoadInitialViewingMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) unsigned int supportedInterfaceOrientations;
@property(readonly, nonatomic) float transcriptHeaderViewMaxRows;
@property(readonly, nonatomic) _Bool isAccessibilityPreferredContentSizeCategory;
@property(readonly, nonatomic) float navigationBarMaxHeight;
@property(readonly, nonatomic) float minNavigationBarHeightValue;
@property(readonly, nonatomic) float maxNavigationBarHeightValue;
@property(readonly, nonatomic) float navigationBarMinHeight;
@property(readonly, nonatomic) double resumeToConversationListTimeInterval;
@property(readonly, nonatomic) _Bool shouldOnlyResumeToConversationListAfterTimeout;
@property(readonly, nonatomic) _Bool usesNavigationBarControls;
@property(readonly, nonatomic) _Bool usesEntryView;
@property(readonly, nonatomic) _Bool isProximityMonitoringSupported;
@property(readonly, nonatomic) _Bool joystickUsesWindow;
@property(readonly, nonatomic) _Bool usesActionMenu;
@property(readonly, nonatomic) _Bool presentForwardingUIModally;
@property(readonly, nonatomic) _Bool recordsRecentContact;
@property(readonly, nonatomic) _Bool showsCompositionPanel;
@property(readonly, nonatomic) _Bool showsSendAnimation;
@property(readonly, nonatomic) _Bool automaticallyShowsKeyboard;
@property(readonly, nonatomic) _Bool darkUIEnabled;
@property(readonly, nonatomic) _Bool isSizeConstrained;
@property(readonly, nonatomic) _Bool promptsForReadReceiptsSetting;
@property(readonly, nonatomic) _Bool resetsIdleTimer;
@property(readonly, nonatomic) _Bool shouldUseTranslucentBars;
@property(readonly, nonatomic) _Bool shouldGrabBackgroundAssertion;
@property(readonly, nonatomic) _Bool canPresentOverKeyboard;
@property(readonly, nonatomic) _Bool usesPopovers;
@property(readonly, nonatomic) _Bool presentsQuickLookController;
@property(readonly, nonatomic) _Bool lowClearanceInLandscape;
@property(readonly, nonatomic) _Bool shouldSuppressRotationInNewCompose;
@property(readonly, nonatomic) _Bool usesUncollapsedSplitview;
@property(readonly, nonatomic) double raiseToTalkErrorMaxDuration;
@property(readonly, nonatomic) double raiseToTalkAutoSendMaxDuration;
@property(readonly, nonatomic) double locationValidInterval;
@property(readonly, nonatomic) int locationShareEODHour;
@property(readonly, nonatomic) double locationShareOneHourTimeInterval;
@property(readonly, nonatomic) double muteEightHourTimeInterval;
@property(readonly, nonatomic) double muteOneHourTimeInterval;
@property(readonly, nonatomic) CKUITheme *theme;

@end
