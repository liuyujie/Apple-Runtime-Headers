//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface CNDefaultPhotoBrowserItem : NSObject
{
    NSString *_imagePath;
    NSImage *_image;
}

@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)initWithImagePath:(id)arg1;

@end
