//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSString;

@protocol CMKTimelapseMovieWriterProtocol <NSObject>
- (void)writeMovieFromImageFiles:(NSArray *)arg1 visMetadataFiles:(NSArray *)arg2 startDate:(NSDate *)arg3 location:(CLLocation *)arg4 outputPath:(NSString *)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(void (^)(_Bool, double))arg8;
@end
