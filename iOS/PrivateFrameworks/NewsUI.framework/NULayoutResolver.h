//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NULayoutResolver : NSObject
{
    struct NULayoutOptions _options;
}

@property(readonly, nonatomic) struct NULayoutOptions options; // @synthesize options=_options;
- (id)adjustedComponentsForComponents:(id)arg1 options:(struct NULayoutOptions)arg2;
- (struct UIEdgeInsets)adjustedEdgeInsetsForOptions:(struct NULayoutOptions)arg1;
- (void)layoutComponents:(id)arg1 inBounds:(struct CGRect)arg2 originOffset:(struct CGPoint)arg3 layoutContext:(id)arg4;
- (id)initWithOptions:(struct NULayoutOptions)arg1;

@end
