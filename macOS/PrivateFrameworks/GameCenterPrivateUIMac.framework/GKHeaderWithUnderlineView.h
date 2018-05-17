//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSUICollectionReusableView.h>

@class NSArray, NSImageView, NSMutableDictionary, NSView;

@interface GKHeaderWithUnderlineView : NSUICollectionReusableView
{
    BOOL _underlineHasRightMargin;
    BOOL _isPinned;
    BOOL _didSetupConstraints;
    NSView *_underlineView;
    NSImageView *_shadowView;
    NSMutableDictionary *_metrics;
    NSArray *_gutterConstraints;
    double _leadingMargin;
    double _trailingMargin;
    NSView *_pinnedBackdropView;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
+ (id)macMetrics;
+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) BOOL didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) NSView *pinnedBackdropView; // @synthesize pinnedBackdropView=_pinnedBackdropView;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(retain, nonatomic) NSArray *gutterConstraints; // @synthesize gutterConstraints=_gutterConstraints;
@property(nonatomic) BOOL isPinned; // @synthesize isPinned=_isPinned;
@property(retain, nonatomic) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) BOOL underlineHasRightMargin; // @synthesize underlineHasRightMargin=_underlineHasRightMargin;
@property(retain, nonatomic) NSImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) NSView *underlineView; // @synthesize underlineView=_underlineView;
- (BOOL)allowsVibrancy;
- (void)pinningStateChangedTo:(BOOL)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)drawsUnderline;
- (void)updateGutterConstraints;
- (void)establishConstraints;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
