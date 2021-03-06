//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface PXCMMPosterHeaderView : UIView
{
    _Bool _showStatusCheckmark;
    _Bool _highlighted;
    NSString *_title;
    NSString *_subtitle;
    NSString *_statusString;
    id <PXDisplayAsset> _asset;
    id <PXUIImageProvider> _mediaProvider;
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
@property(readonly, nonatomic) id <PXUIImageProvider> mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> asset; // @synthesize asset=_asset;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool showStatusCheckmark; // @synthesize showStatusCheckmark=_showStatusCheckmark;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithPresentationStyle:(long long)arg1;

@end

