//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString, NSURL, SBFWallpaperOptions, SBWallpaperImage, UIColor, UIImage;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    int _wallpaperType;
    SBWallpaperImage *_wallpaperImage;
    UIImage *_wallpaperOriginalImage;
    UIImage *_wallpaperThumbnailImage;
    NSData *_wallpaperThumbnailImageData;
    SBFWallpaperOptions *_wallpaperOptions;
    NSDictionary *_proceduralWallpaperInfo;
    NSURL *_videoURL;
    NSURL *_originalVideoURL;
    UIColor *_wallpaperColor;
    NSString *_wallpaperColorName;
    int _variant;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;
@property(copy, nonatomic) NSString *wallpaperColorName; // @synthesize wallpaperColorName=_wallpaperColorName;
@property(copy, nonatomic) UIColor *wallpaperColor; // @synthesize wallpaperColor=_wallpaperColor;
@property(copy, nonatomic) NSURL *originalVideoURL; // @synthesize originalVideoURL=_originalVideoURL;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSDictionary *proceduralWallpaperInfo; // @synthesize proceduralWallpaperInfo=_proceduralWallpaperInfo;
@property(retain, nonatomic) id <SBFProceduralWallpaper> proceduralWallpaper; // @synthesize proceduralWallpaper=_proceduralWallpaper;
@property(copy, nonatomic) SBFWallpaperOptions *wallpaperOptions; // @synthesize wallpaperOptions=_wallpaperOptions;
@property(copy, nonatomic) NSData *wallpaperThumbnailImageData; // @synthesize wallpaperThumbnailImageData=_wallpaperThumbnailImageData;
@property(retain, nonatomic) UIImage *wallpaperThumbnailImage; // @synthesize wallpaperThumbnailImage=_wallpaperThumbnailImage;
@property(retain, nonatomic) UIImage *wallpaperOriginalImage; // @synthesize wallpaperOriginalImage=_wallpaperOriginalImage;
@property(retain, nonatomic) SBWallpaperImage *wallpaperImage; // @synthesize wallpaperImage=_wallpaperImage;
@property(readonly, nonatomic) int wallpaperType; // @synthesize wallpaperType=_wallpaperType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property(readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
- (id)init;
- (id)initWithVariant:(int)arg1 type:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
