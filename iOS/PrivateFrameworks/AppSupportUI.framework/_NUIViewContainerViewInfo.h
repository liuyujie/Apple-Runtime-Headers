//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NUIViewContainerViewInfo : NSObject
{
    struct nui_size_cache _sizeCache;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    double _customScreenScale;
    struct UIEdgeInsets _alignmentInsets;
    double _topBaseline;
    double _bottomBaseline;
    struct {
        unsigned int neverCache:1;
        unsigned int alsoInvalidateSuperview:1;
        unsigned int alignmentInsetsAreCustom:1;
        unsigned int baselineRelativeInsets:1;
        unsigned int topBaselineIsCustom:1;
        unsigned int bottomBaselineIsCustom:1;
    } _flags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetCaches;
- (id)init;

@end

