//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, UICollectionLayoutGeometry, UICollectionLayoutGeometryGroupItemConfiguration;

__attribute__((visibility("hidden")))
@interface UICollectionLayoutGeometryGroupItem : NSObject <NSCopying>
{
    _Bool _heightUseActualHeight;
    _Bool _widthUseActualWidth;
    _Bool _spacingLeadingSpaceComputedIntrinsic;
    _Bool _spacingTrailingSpaceComputedIntrinsic;
    _Bool _spacingTopSpaceComputedIntrinsic;
    _Bool _spacingBottomSpaceComputedIntrinsic;
    NSArray *_attributes;
    UICollectionLayoutGeometryGroupItemConfiguration *_configuration;
    float _height;
    float _heightComputedContainerHeightFactor;
    float _heightComputedContainerWidthFactor;
    float _width;
    float _widthComputedContainerWidthFactor;
    float _widthComputedContainerHeightFactor;
    float _spacingLeadingSpaceFixedSpace;
    float _spacingTrailingSpaceFixedSpace;
    float _spacingTopSpaceFixedSpace;
    float _spacingBottomSpaceFixedSpace;
    UICollectionLayoutGeometry *_geometry;
}

+ (id)itemWithConfiguration:(id)arg1;
+ (id)itemWithAttributes:(id)arg1;
@property(retain, nonatomic) UICollectionLayoutGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) float spacingBottomSpaceFixedSpace; // @synthesize spacingBottomSpaceFixedSpace=_spacingBottomSpaceFixedSpace;
@property(nonatomic) _Bool spacingBottomSpaceComputedIntrinsic; // @synthesize spacingBottomSpaceComputedIntrinsic=_spacingBottomSpaceComputedIntrinsic;
@property(nonatomic) float spacingTopSpaceFixedSpace; // @synthesize spacingTopSpaceFixedSpace=_spacingTopSpaceFixedSpace;
@property(nonatomic) _Bool spacingTopSpaceComputedIntrinsic; // @synthesize spacingTopSpaceComputedIntrinsic=_spacingTopSpaceComputedIntrinsic;
@property(nonatomic) float spacingTrailingSpaceFixedSpace; // @synthesize spacingTrailingSpaceFixedSpace=_spacingTrailingSpaceFixedSpace;
@property(nonatomic) _Bool spacingTrailingSpaceComputedIntrinsic; // @synthesize spacingTrailingSpaceComputedIntrinsic=_spacingTrailingSpaceComputedIntrinsic;
@property(nonatomic) float spacingLeadingSpaceFixedSpace; // @synthesize spacingLeadingSpaceFixedSpace=_spacingLeadingSpaceFixedSpace;
@property(nonatomic) _Bool spacingLeadingSpaceComputedIntrinsic; // @synthesize spacingLeadingSpaceComputedIntrinsic=_spacingLeadingSpaceComputedIntrinsic;
@property(nonatomic) float widthComputedContainerHeightFactor; // @synthesize widthComputedContainerHeightFactor=_widthComputedContainerHeightFactor;
@property(nonatomic) float widthComputedContainerWidthFactor; // @synthesize widthComputedContainerWidthFactor=_widthComputedContainerWidthFactor;
@property(nonatomic) _Bool widthUseActualWidth; // @synthesize widthUseActualWidth=_widthUseActualWidth;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) float heightComputedContainerWidthFactor; // @synthesize heightComputedContainerWidthFactor=_heightComputedContainerWidthFactor;
@property(nonatomic) float heightComputedContainerHeightFactor; // @synthesize heightComputedContainerHeightFactor=_heightComputedContainerHeightFactor;
@property(nonatomic) _Bool heightUseActualHeight; // @synthesize heightUseActualHeight=_heightUseActualHeight;
@property(nonatomic) float height; // @synthesize height=_height;
@property(retain, nonatomic) UICollectionLayoutGeometryGroupItemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)_parseAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIEdgeInsets)effectiveEdgeInsets;
- (struct UIEdgeInsets)contentEdgeInsets;
- (_Bool)hasHorizontalIntrinsicSpacing;
- (_Bool)hasVerticalIntrinsicSpacing;
- (float)spacingSizeRequiredForSize:(struct CGSize)arg1 layoutAxis:(int)arg2;
- (struct CGSize)sizeForActualSize:(struct CGSize)arg1 containerDimensions:(struct CGSize)arg2;
- (void)addAttribute:(id)arg1;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
