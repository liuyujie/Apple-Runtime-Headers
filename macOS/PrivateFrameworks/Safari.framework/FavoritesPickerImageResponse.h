//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSSiteMetadataResponse.h"

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface FavoritesPickerImageResponse : WBSSiteMetadataResponse
{
    NSImage *_image;
    NSColor *_themeColor;
}

+ (id)responseWithURL:(id)arg1 image:(id)arg2 themeColor:(id)arg3;
@property(readonly, nonatomic) NSColor *themeColor; // @synthesize themeColor=_themeColor;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 image:(id)arg2 themeColor:(id)arg3;
- (id)initWithURL:(id)arg1;

@end
