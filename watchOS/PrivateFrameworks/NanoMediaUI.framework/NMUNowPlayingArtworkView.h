//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface NMUNowPlayingArtworkView : UIView
{
    UIImageView *_unprocessedArtworkImageView;
    UIImageView *_processedArtworkImageView;
    UIView *_dimmingView;
    _Bool _dimmed;
    _Bool _unprocessedArtworkImageVisible;
    UIImage *_unprocessedArtworkImage;
    UIImage *_processedArtworkImage;
}

@property(nonatomic, getter=isUnprocessedArtworkImageVisible) _Bool unprocessedArtworkImageVisible; // @synthesize unprocessedArtworkImageVisible=_unprocessedArtworkImageVisible;
@property(copy, nonatomic) UIImage *processedArtworkImage; // @synthesize processedArtworkImage=_processedArtworkImage;
@property(copy, nonatomic) UIImage *unprocessedArtworkImage; // @synthesize unprocessedArtworkImage=_unprocessedArtworkImage;
- (void).cxx_destruct;
- (void)_setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_imageCrossFadeTransition;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setUnprocessedArtworkImageVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

