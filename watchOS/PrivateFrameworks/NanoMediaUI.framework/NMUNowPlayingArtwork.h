//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface NMUNowPlayingArtwork : NSObject
{
    UIImage *_artworkImage;
    UIImage *_processedArtworkImage;
    UIImage *_touchHighlightArtworkImage;
}

@property(retain, nonatomic) UIImage *touchHighlightArtworkImage; // @synthesize touchHighlightArtworkImage=_touchHighlightArtworkImage;
@property(retain, nonatomic) UIImage *processedArtworkImage; // @synthesize processedArtworkImage=_processedArtworkImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void).cxx_destruct;

@end

