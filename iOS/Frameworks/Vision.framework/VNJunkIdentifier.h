//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNJunkIdentifier : VNDetector
{
    shared_ptr_b26ea6de mJunkDescriptorImpl;
    shared_ptr_047f28ed mJunkClassifierImpl;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
