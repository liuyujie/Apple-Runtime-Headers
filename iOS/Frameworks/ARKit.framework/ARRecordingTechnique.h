//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSSet, NSURL;

@interface ARRecordingTechnique : ARTechnique
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_videoMetadataInput;
    AVAssetWriterInput *_accelInput;
    AVAssetWriterInput *_gyroInput;
    AVAssetWriterInput *_deviceOrientationInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoInputAdaptor;
    AVAssetWriterInput *_depthInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_accelInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_gyroInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_videoMetadataInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_deviceOrientationInputAdaptor;
    NSDictionary *_resultAdaptors;
    NSDictionary *_resultInputs;
    NSObject<OS_dispatch_semaphore> *_inputIsReadySemaphore;
    _Bool _isWaitingUntilInputIsReady;
    unsigned long long _sensorDataTypes;
    NSSet *_recordableResultClasses;
    NSMutableArray *_motionDataCache;
    double _sessionSourceTime;
    NSMutableDictionary *_lastRecordedTimestamps;
    _Bool _sessionStarted;
    _Bool _stopRecordingRequested;
    _Bool _expectDepthData;
    _Bool _shouldSaveVideoInPhotosLibrary;
    NSURL *_outputFileURL;
    id <ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
}

+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;
@property(nonatomic) __weak id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate; // @synthesize recordingTechniqueDelegate=_recordingTechniqueDelegate;
@property(nonatomic) _Bool shouldSaveVideoInPhotosLibrary; // @synthesize shouldSaveVideoInPhotosLibrary=_shouldSaveVideoInPhotosLibrary;
@property(nonatomic) _Bool expectDepthData; // @synthesize expectDepthData=_expectDepthData;
@property(readonly, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (void).cxx_destruct;
- (id)createFileMetadata;
- (void)writeData:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeImageMetadata:(id)arg1;
- (void)writePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writeDepthMap:(id)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writeImageData:(id)arg1;
- (void)writeOutCachedMotionDataIfPresent;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (struct CGAffineTransform)computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startAssetWriterAtTimestamp:(double)arg1;
- (void)setupResultTracks;
- (void)setupSensorTracksWithImageData:(id)arg1;
- (void)createAssetWriter;
- (void)removeTemporaryVideoFile;
- (void)copyVideoToPhotoLibrary;
- (void)finishRecording;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
@property(readonly, nonatomic) NSSet *recordingResultDataClasses;
@property(readonly, nonatomic) unsigned long long recordingSensorDataTypes;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (id)initWithTechniques:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end
