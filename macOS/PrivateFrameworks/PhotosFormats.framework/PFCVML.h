//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CVMLRequestHandler;

@interface PFCVML : NSObject
{
    CVMLRequestHandler *_requestHandler;
}

+ (long long)faceprintVersion;
+ (long long)faceAlgorithmVersion;
+ (id)faceprintFromFaceprintArchive:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_representativenessFromFaceObservations:(id)arg1 error:(id *)arg2;
- (id)selectRepresentativeFromFaceDescriptors:(id)arg1;
- (id)init;

@end
