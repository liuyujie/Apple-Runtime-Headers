//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKModel.h"

@class TSKReplaceAllChildCommand, TSKReplaceAllCommand, TSKSearch;

@protocol TSKSearchable <TSKModel>

@optional
- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void (^)(id <TSKSearchReference>))arg1;
@end
