//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface PFSharingRemakerOptions : NSObject <NSCopying>
{
    _Bool _shouldStripLocation;
    _Bool _shouldStripAllMetadata;
    _Bool _shouldConvertToSRGB;
    NSString *_customAccessibilityLabel;
    NSURL *_outputDirectoryURL;
    NSString *_outputFilename;
    NSString *_exportPreset;
}

@property(copy, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(nonatomic) _Bool shouldConvertToSRGB; // @synthesize shouldConvertToSRGB=_shouldConvertToSRGB;
@property(nonatomic) _Bool shouldStripAllMetadata; // @synthesize shouldStripAllMetadata=_shouldStripAllMetadata;
@property(nonatomic) _Bool shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
