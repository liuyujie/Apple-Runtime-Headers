//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMeshGenerator : CIFilter
{
    NSNumber *inputWidth;
    CIColor *inputColor;
    NSArray *inputMesh;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSArray *inputMesh; // @synthesize inputMesh;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
- (id)outputImage;
- (struct CGRect)extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3;
- (id)_CIMesh32;
- (id)_CIMesh16;
- (id)_CIMesh8;
- (id)_CIMesh4;
- (id)_CIMesh2;
- (id)_CIMesh1;

@end
