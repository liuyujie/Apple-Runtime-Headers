//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOAutomobileOptions, GEOTransitOptions;

@protocol _MKInfoCardController <NSObject>
+ (float)headerHeightInMinimalMode;
@property(nonatomic) float contentAlpha;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
@property(retain, nonatomic) GEOTransitOptions *transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions;
- (void)hideTitle:(_Bool)arg1;
@end
