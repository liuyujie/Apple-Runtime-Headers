//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GEOFeatureStyleAttributes, MKMapSnapshotOptions;

@protocol MKSnapshotServiceProtocol
- (void)requestIconWithStyleAttributes:(GEOFeatureStyleAttributes *)arg1 size:(unsigned int)arg2 scale:(float)arg3 completionHandler:(void (^)(UIImage *))arg4;
- (void)requestSnapshotWithOptions:(MKMapSnapshotOptions *)arg1 completionHandler:(void (^)(VKMapSnapshot *, NSError *))arg2;
@end

