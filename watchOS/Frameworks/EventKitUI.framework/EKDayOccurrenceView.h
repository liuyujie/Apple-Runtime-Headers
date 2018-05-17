//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKDayOccurrenceTravelTimeViewMetricsDelegate.h"
#import "NSCopying.h"

@class EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, EKEvent, NSObject<EKDayOccurrenceViewDelegate>, NSString, UIColor, UIImageView;

@interface EKDayOccurrenceView : UIView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate>
{
    float _visibleHeight;
    UIImageView *_eventBackgroundView;
    UIImageView *_travelBackgroundView;
    EKDayOccurrenceContentView *_content;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    _Bool _needsContentCalc;
    _Bool _needsBackgroundImageUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    float _originalXBeforeOffset;
    unsigned int _touchKeptInsideOccurrence:1;
    unsigned int _offsetContentForLandscape:1;
    struct UIEdgeInsets _padding;
    unsigned int _bottomPinningState;
    struct CGRect _unpinnedEventBackgroundFrame;
    struct CGRect _unpinnedTravelBackgroundFrame;
    UIView *_pinFadeView;
    _Bool _visibleHeightLocked;
    _Bool _selected;
    _Bool _dimmed;
    _Bool _allDayDrawingStyle;
    _Bool _drawsResizeHandles;
    _Bool _hideBackgroundImage;
    _Bool _hideText;
    _Bool _isSelectedCopyView;
    _Bool _isProposedTime;
    _Bool _tentative;
    _Bool _declined;
    _Bool _needsReply;
    _Bool _allDay;
    _Bool _showsTravelTime;
    _Bool _reduceLayoutProcessingForAnimation;
    _Bool _touchesAreBeingTracked;
    NSObject<EKDayOccurrenceViewDelegate> *_delegate;
    EKDayOccurrenceView *_selectedCopy;
    EKEvent *_occurrence;
    float _travelTimeSubviewHeightInPoints;
    UIColor *_color;
    float _cappedColorBarHeight;
    int _occurrenceBackgroundStyle;
    float _bottomPinningProximity;
    float _topYBoundaryForText;
    double _travelTime;
    struct UIEdgeInsets _margin;
}

+ (struct UIEdgeInsets)defaultPadding;
+ (struct UIEdgeInsets)defaultMargin;
+ (float)barToBarHorizontalDistanceIncludingBarWidth;
+ (float)colorBarThickness;
+ (float)barToBarGapWidth;
+ (float)enoughHeightForOneLineForEvent:(id)arg1 usingSmallText:(_Bool)arg2;
+ (float)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(_Bool)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_color:(id)arg1 lightenedToPercentage:(float)arg2 withFinalAlpha:(float)arg3;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(_Bool)arg2 declined:(_Bool)arg3 cancelled:(_Bool)arg4 tentative:(_Bool)arg5 needsReply:(_Bool)arg6 colorBarStyle:(int)arg7 dayViewBackgroundStyle:(int)arg8 usesLargeTextLayout:(_Bool)arg9;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(float)arg4 colorBarStyle:(int)arg5;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(int)arg3;
+ (id)_cachedLocationForEventID:(id)arg1;
+ (void)_cacheLocation:(id)arg1 forEventID:(id)arg2;
+ (id)_recentlyDisplayedLocations;
+ (id)imageForExternalDragOperationFromEvent:(id)arg1;
+ (id)framePathForExternalDragOperationWithSize:(struct CGSize)arg1;
+ (struct CGRect)contentStretchRectForFrame:(struct CGRect)arg1;
+ (float)bottomShadowMargin;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(_Bool)arg2 usesSmallText:(_Bool)arg3;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(_Bool)arg2;
+ (float)minimumHeightForOrientation:(int)arg1;
+ (id)occurrenceViewWithFrame:(struct CGRect)arg1;
+ (void)clearCaches;
+ (void)_clearViewCache;
+ (id)_viewCache;
@property(nonatomic) _Bool touchesAreBeingTracked; // @synthesize touchesAreBeingTracked=_touchesAreBeingTracked;
@property(nonatomic) float topYBoundaryForText; // @synthesize topYBoundaryForText=_topYBoundaryForText;
@property(nonatomic) float bottomPinningProximity; // @synthesize bottomPinningProximity=_bottomPinningProximity;
@property(nonatomic) _Bool reduceLayoutProcessingForAnimation; // @synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(nonatomic) _Bool showsTravelTime; // @synthesize showsTravelTime=_showsTravelTime;
@property(nonatomic) float cappedColorBarHeight; // @synthesize cappedColorBarHeight=_cappedColorBarHeight;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) _Bool needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) _Bool declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) _Bool tentative; // @synthesize tentative=_tentative;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool isProposedTime; // @synthesize isProposedTime=_isProposedTime;
@property(nonatomic) float travelTimeSubviewHeightInPoints; // @synthesize travelTimeSubviewHeightInPoints=_travelTimeSubviewHeightInPoints;
@property(nonatomic) _Bool isSelectedCopyView; // @synthesize isSelectedCopyView=_isSelectedCopyView;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool hideText; // @synthesize hideText=_hideText;
@property(nonatomic) _Bool hideBackgroundImage; // @synthesize hideBackgroundImage=_hideBackgroundImage;
@property(nonatomic) _Bool drawsResizeHandles; // @synthesize drawsResizeHandles=_drawsResizeHandles;
@property(nonatomic) _Bool allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) EKEvent *occurrence; // @synthesize occurrence=_occurrence;
@property(readonly, nonatomic) _Bool visibleHeightLocked; // @synthesize visibleHeightLocked=_visibleHeightLocked;
@property(nonatomic) __weak EKDayOccurrenceView *selectedCopy; // @synthesize selectedCopy=_selectedCopy;
@property(nonatomic) __weak NSObject<EKDayOccurrenceViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)_compareOccurrenceViewLeftToRight:(id)arg1;
- (_Bool)_isBelowAllDayOccurrenceView:(id)arg1;
- (_Bool)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (_Bool)_isAboveAllDayOccurrenceView:(id)arg1;
- (_Bool)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (int)_compareOccurrenceViewTopToBottom:(id)arg1;
- (int)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1;
- (int)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1;
- (int)compareOccurrenceViewForTabOrdering:(id)arg1;
@property(readonly, nonatomic) _Bool isPinned;
- (void)setHideText:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_resetContentViewPosition;
- (_Bool)_isTimedOccurrenceDrawingStyle;
- (_Bool)resetContentViewToOriginalState:(_Bool)arg1;
- (void)fadeInContentViewAt:(float)arg1 minWidth:(float)arg2 animated:(_Bool)arg3;
- (float)_verticalContentInset;
- (float)enoughHeightForOneLine;
- (float)viewMaxNaturalTextHeight;
- (void)bringResizeHandlesToFront;
- (id)arrayOfResizeHandles;
- (int)dragTypeFromPoint:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)frameOfOpaqueContent;
- (struct CGRect)_frameMutatedForProximityToHourLine:(struct CGRect)arg1;
- (id)_backgroundColor;
- (struct CGRect)contentRectForPreview;
- (struct CGRect)_computeTravelTimeContentRect;
- (struct CGRect)_computeContentRect;
- (id)_newResizeHandleView;
- (void)animateToFrame:(struct CGRect)arg1 isAllDay:(_Bool)arg2 beginFromCurrentState:(_Bool)arg3 whenFinished:(CDUnknownBlockType)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateResizeHandleLocations;
- (void)setVisibleHeight:(float)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)_updateColors;
- (void)setAllDayDrawingStyle:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)hasIcon;
@property(nonatomic, getter=isBirthday) _Bool birthday;
@property(nonatomic, getter=isCancelled) _Bool cancelled;
- (void)_invalidateContentBounds;
- (id)combineLocationStringWithProposeNewTimeString:(id)arg1;
@property(nonatomic) int routingMode;
@property(copy, nonatomic) NSString *location;
- (id)time;
- (void)setTime:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *timeTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(nonatomic) struct UIEdgeInsets padding;
- (void)_removeTravelTimeSubviews;
- (void)_addTravelTimeSubviews;
@property(nonatomic) _Bool usesSmallText;
- (void)prepareForReuse;
- (void)setUserInteractionEnabled:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
