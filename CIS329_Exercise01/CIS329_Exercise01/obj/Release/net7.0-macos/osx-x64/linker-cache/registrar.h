#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#pragma clang diagnostic ignored "-Wunguarded-availability-new"
#define CORECLR_RUNTIME
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <CallKit/CallKit.h>
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import <ThreadNetwork/THClient.h>
#import <Speech/Speech.h>
#import <SoundAnalysis/SoundAnalysis.h>
#import <ShazamKit/ShazamKit.h>
#import <SharedWithYou/SharedWithYou.h>
#import <ScreenTime/ScreenTime.h>
#import <SafariServices/SafariServices.h>
#import <ReplayKit/ReplayKit.h>
#import <QuickLookThumbnailing/QuickLookThumbnailing.h>
#import <Quartz/Quartz.h>
#import <QuartzCore/QuartzCore.h>
#import <PushKit/PushKit.h>
#import <PhotosUI/PhotosUI.h>
#import <PHASE/PHASE.h>
#import <PencilKit/PencilKit.h>
#import <OSLog/OSLog.h>
#import <NotificationCenter/NotificationCenter.h>
#import <MediaLibrary/MediaLibrary.h>
#import <MailKit/MailKit.h>
#import <LocalAuthenticationEmbeddedUI/LocalAuthenticationEmbeddedUI.h>
#import <LocalAuthentication/LocalAuthentication.h>
#import <LinkPresentation/LinkPresentation.h>
#import <IntentsUI/IntentsUI.h>
#import <FileProviderUI/FileProviderUI.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <ExtensionKit/ExtensionKit.h>
#import <ExecutionPolicy/ExecutionPolicy.h>
#import <CoreAudioKit/CoreAudioKit.h>
#import <ContactsUI/ContactsUI.h>
#import <AutomaticAssessmentConfiguration/AutomaticAssessmentConfiguration.h>
#import <AdSupport/AdSupport.h>
#import <AdServices/AdServices.h>
#import <Accessibility/Accessibility.h>
#import <iTunesLibrary/iTunesLibrary.h>
#import <Vision/Vision.h>
#import <VideoSubscriberAccount/VideoSubscriberAccount.h>
#import <UserNotifications/UserNotifications.h>
#import <StoreKit/StoreKit.h>
#import <SpriteKit/SpriteKit.h>
#import <Social/Social.h>
#import <SharedWithYouCore/SharedWithYouCore.h>
#import <ScriptingBridge/ScriptingBridge.h>
#import <ScreenCaptureKit/ScreenCaptureKit.h>
#import <SceneKit/SceneKit.h>
#import <Quartz/Quartz.h>
#import <Photos/Photos.h>
#import <Quartz/Quartz.h>
#import <PassKit/PassKit.h>
#import <NetworkExtension/NetworkExtension.h>
#import <NaturalLanguage/NaturalLanguage.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <ModelIO/ModelIO.h>
#import <MetricKit/MetricKit.h>
#import <MetalPerformanceShadersGraph/MetalPerformanceShadersGraph.h>
#import <MetalPerformanceShaders/MetalPerformanceShaders.h>
#import <MetalKit/MetalKit.h>
#import <Metal/Metal.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MLCompute/MLCompute.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <Intents/Intents.h>
#import <Quartz/Quartz.h>
#import <ImageCaptureCore/ImageCaptureCore.h>
#import <IOSurface/IOSurfaceObjC.h>
#import <HealthKit/HealthKit.h>
#import <GameplayKit/GameplayKit.h>
#import <GameKit/GameKit.h>
#import <GameController/GameController.h>
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED 1
#import <GLKit/GLKit.h>
#import <WebKit/WebKit.h>
#import <FileProvider/FileProvider.h>
#import <EventKit/EventKit.h>
#import <CoreWlan/CoreWlan.h>
#import <CoreSpotlight/CoreSpotlight.h>
#import <CoreMotion/CoreMotion.h>
#import <CoreMIDI/CoreMIDI.h>
#import <CoreML/CoreML.h>
#import <CoreImage/CoreImage.h>
#import <CoreImage/CIFilterBuiltins.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreData/CoreData.h>
#import <IOBluetooth/IOBluetooth.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <Contacts/Contacts.h>
#import <CloudKit/CloudKit.h>
#import <ClassKit/ClassKit.h>
#import <BusinessChat/BusinessChat.h>
#import <BackgroundAssets/BackgroundAssets.h>
#import <AuthenticationServices/AuthenticationServices.h>
#import <AudioUnit/AudioUnit.h>
#import <Accounts/Accounts.h>
#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>
#import <DeviceCheck/DeviceCheck.h>
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#import <FinderSync/FinderSync.h>

@class Microsoft_macOS__AppKit_NSApplicationDelegate;
@class AppDelegate;
@class ViewController;
@class Microsoft_macOS__Speech_SFSpeechRecognitionTaskDelegate;
@class Microsoft_macOS__Speech_SFSpeechRecognizerDelegate;
@class Microsoft_macOS__ShazamKit_SHSessionDelegate;
@class Microsoft_macOS__SharedWithYou_SWCollaborationViewDelegate;
@class Microsoft_macOS__SharedWithYou_SWHighlightCenterDelegate;
@class Microsoft_macOS__ReplayKit_RPBroadcastActivityControllerDelegate;
@class Microsoft_macOS__ReplayKit_RPBroadcastControllerDelegate;
@class Microsoft_macOS__ReplayKit_RPPreviewViewControllerDelegate;
@class Microsoft_macOS__ReplayKit_RPScreenRecorderDelegate;
@class Microsoft_macOS__PushKit_PKPushRegistryDelegate;
@class Microsoft_macOS__PhotosUI_PHLivePhotoViewDelegate;
@class Microsoft_macOS__PhotosUI_PHPickerViewControllerDelegate;
@class Microsoft_macOS__PhotosUI_PHProjectTypeDescriptionDataSource;
@class Microsoft_macOS__NotificationCenter_NCWidgetListViewDelegate;
@class Microsoft_macOS__NotificationCenter_NCWidgetProviding;
@class Microsoft_macOS__NotificationCenter_NCWidgetSearchViewDelegate;
@class Microsoft_macOS__IntentsUI_INUIAddVoiceShortcutButtonDelegate;
@class Microsoft_macOS__IntentsUI_INUIAddVoiceShortcutViewControllerDelegate;
@class Microsoft_macOS__IntentsUI_INUIEditVoiceShortcutViewControllerDelegate;
@class Microsoft_macOS__ExternalAccessory_EAAccessoryDelegate;
@class Microsoft_macOS__ExtensionKit_EXHostViewControllerDelegate;
@class Microsoft_macOS__ContactsUI_CNContactPickerDelegate;
@class Microsoft_macOS__AutomaticAssessmentConfiguration_AEAssessmentSessionDelegate;
@class Microsoft_macOS__VideoSubscriberAccount_VSAccountManagerDelegate;
@class Microsoft_macOS__UserNotifications_UNUserNotificationCenterDelegate;
@class Microsoft_macOS__StoreKit_SKPaymentQueueDelegate;
@class Microsoft_macOS__StoreKit_SKPaymentTransactionObserver;
@class Microsoft_macOS__StoreKit_SKRequestDelegate;
@class Microsoft_macOS__StoreKit_SKProductsRequestDelegate;
@class Microsoft_macOS__StoreKit_SKStoreProductViewControllerDelegate;
@class Microsoft_macOS__SpriteKit_SKPhysicsContactDelegate;
@class Microsoft_macOS__SpriteKit_SKSceneDelegate;
@class Microsoft_macOS__SpriteKit_SKViewDelegate;
@class Microsoft_macOS__ScriptingBridge_SBApplicationDelegate;
@class Microsoft_macOS__ScreenCaptureKit_SCStreamDelegate;
@class Microsoft_macOS__SceneKit_SCNAnimatable;
@class Microsoft_macOS__SceneKit_SCNActionable;
@class Microsoft_macOS__SceneKit_SCNAvoidOccluderConstraintDelegate;
@class Microsoft_macOS__SceneKit_SCNBoundingVolume;
@class Microsoft_macOS__SceneKit_SCNCameraControllerDelegate;
@class Microsoft_macOS__SceneKit_SCNNodeRendererDelegate;
@class Microsoft_macOS__SceneKit_SCNPhysicsContactDelegate;
@class Microsoft_macOS__SceneKit_SCNProgramDelegate;
@class Microsoft_macOS__SceneKit_SCNSceneExportDelegate;
@class Microsoft_macOS__SceneKit_SCNSceneRenderer;
@class Microsoft_macOS__SceneKit_SCNSceneRendererDelegate;
@class Microsoft_macOS__SceneKit_SCNShadable;
@class Microsoft_macOS__SceneKit_SCNTechniqueSupport;
@class Microsoft_macOS__QuickLookUI_QLPreviewItem;
@class Microsoft_macOS__QuickLookUI_QLPreviewPanelDataSource;
@class Microsoft_macOS__QuickLookUI_QLPreviewPanelDelegate;
@class Microsoft_macOS__Photos_PHPhotoLibraryChangeObserver;
@class Microsoft_macOS__PdfKit_PdfDocumentDelegate;
@class Microsoft_macOS__PdfKit_PdfViewDelegate;
@class Microsoft_macOS__PassKit_PKPaymentAuthorizationControllerDelegate;
@class Microsoft_macOS__PassKit_PKPaymentAuthorizationViewControllerDelegate;
@class Microsoft_macOS__PassKit_PKVehicleConnectionDelegate;
@class Microsoft_macOS__NetworkExtension_NWTcpConnectionAuthenticationDelegate;
@class Microsoft_macOS__MultipeerConnectivity_MCAdvertiserAssistantDelegate;
@class Microsoft_macOS__MultipeerConnectivity_MCBrowserViewControllerDelegate;
@class Microsoft_macOS__MultipeerConnectivity_MCNearbyServiceAdvertiserDelegate;
@class Microsoft_macOS__MultipeerConnectivity_MCNearbyServiceBrowserDelegate;
@class Microsoft_macOS__MultipeerConnectivity_MCSessionDelegate;
@class Microsoft_macOS__ModelIO_MDLLightProbeIrradianceDataSource;
@class Microsoft_macOS__MetalPerformanceShaders_MPSCnnBatchNormalizationDataSource;
@class Microsoft_macOS__MetalPerformanceShaders_MPSCnnConvolutionDataSource;
@class Microsoft_macOS__MetalPerformanceShaders_MPSCnnInstanceNormalizationDataSource;
@class Microsoft_macOS__MetalKit_MTKViewDelegate;
@class Microsoft_macOS__Metal_MTLCaptureScope;
@class Microsoft_macOS__Metal_MTLDrawable;
@class Microsoft_macOS__MapKit_MKAnnotation;
@class Microsoft_macOS__MapKit_MKLocalSearchCompleterDelegate;
@class Microsoft_macOS__MapKit_MKLookAroundViewControllerDelegate;
@class Microsoft_macOS__MapKit_MKMapViewDelegate;
@class Microsoft_macOS__MapKit_MKOverlay;
@class Microsoft_macOS__JavaScriptCore_JSExport;
@class Microsoft_macOS__ImageKit_IKCameraDeviceViewDelegate;
@class Microsoft_macOS__ImageKit_IKDeviceBrowserViewDelegate;
@class Microsoft_macOS__ImageKit_IKFilterCustomUIProvider;
@protocol IKImageBrowserDataSource;
@class Microsoft_macOS__ImageKit_IKImageBrowserDataSource;
@protocol IKImageBrowserDelegate;
@class Microsoft_macOS__ImageKit_IKImageBrowserDelegate;
@protocol IKImageBrowserItem;
@class Microsoft_macOS__ImageKit_IKImageBrowserItem;
@class Microsoft_macOS__ImageKit_IKImageEditPanelDataSource;
@protocol IKSaveOptionsDelegate;
@class Microsoft_macOS__ImageKit_IKSaveOptionsDelegate;
@class Microsoft_macOS__ImageKit_IKScannerDeviceViewDelegate;
@class Microsoft_macOS__ImageKit_IKSlideshowDataSource;
@class Microsoft_macOS__ImageCaptureCore_ICCameraDeviceDelegate;
@class Microsoft_macOS__ImageCaptureCore_ICCameraDeviceDownloadDelegate;
@class Microsoft_macOS__ImageCaptureCore_ICDeviceBrowserDelegate;
@class Microsoft_macOS__ImageCaptureCore_ICDeviceDelegate;
@class Microsoft_macOS__ImageCaptureCore_ICScannerDeviceDelegate;
@class Microsoft_macOS__HealthKit_HKLiveWorkoutBuilderDelegate;
@class Microsoft_macOS__HealthKit_HKWorkoutSessionDelegate;
@class Microsoft_macOS__GameplayKit_GKAgentDelegate;
@class Microsoft_macOS__GameKit_GKAchievementViewControllerDelegate;
@class Microsoft_macOS__GameKit_GKChallengeEventHandlerDelegate;
@class Microsoft_macOS__GameKit_GKChallengeListener;
@class Microsoft_macOS__GameKit_GKChallengesViewControllerDelegate;
@class Microsoft_macOS__GameKit_GKFriendRequestComposeViewControllerDelegate;
@class Microsoft_macOS__GameKit_GKGameCenterControllerDelegate;
@class Microsoft_macOS__GameKit_GKInviteEventListener;
@class Microsoft_macOS__GameKit_GKLeaderboardViewControllerDelegate;
@class Microsoft_macOS__GameKit_GKLocalPlayerListener;
@class Microsoft_macOS__GameKit_GKMatchDelegate;
@class Microsoft_macOS__GameKit_GKMatchmakerViewControllerDelegate;
@class Microsoft_macOS__GameKit_GKSavedGameListener;
@class Microsoft_macOS__GameKit_GKSessionDelegate;
@class Microsoft_macOS__GameKit_GKTurnBasedEventHandlerDelegate;
@class Microsoft_macOS__GameKit_GKTurnBasedEventListener;
@class Microsoft_macOS__GameKit_GKTurnBasedMatchmakerViewControllerDelegate;
@class Microsoft_macOS__GLKit_GLKNamedEffect;
@class Microsoft_macOS__WebKit_WebPolicyDelegate;
@class Microsoft_macOS__WebKit_DomEventListener;
@class Microsoft_macOS__WebKit_DomEventTarget;
@class Microsoft_macOS__WebKit_DomNodeFilter;
@class Microsoft_macOS__WebKit_WebDocumentRepresentation;
@class Microsoft_macOS__WebKit_WebDownloadDelegate;
@class Microsoft_macOS__WebKit_WebFrameLoadDelegate;
@class Microsoft_macOS__WebKit_WebOpenPanelResultListener;
@class Microsoft_macOS__WebKit_WebPolicyDecisionListener;
@class Microsoft_macOS__WebKit_WebResourceLoadDelegate;
@class Microsoft_macOS__WebKit_WebUIDelegate;
@class Microsoft_macOS__WebKit_WKDownloadDelegate;
@class Microsoft_macOS__WebKit_WKNavigationDelegate;
@class Microsoft_macOS__WebKit_WKScriptMessageHandler;
@class Microsoft_macOS__WebKit_WKUIDelegate;
@class Foundation_NSDispatcher;
@class __MonoMac_NSActionDispatcher;
@class __MonoMac_NSSynchronizationContextDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class Foundation_NSAsyncDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class __MonoMac_NSAsyncSynchronizationContextDispatcher;
@class Microsoft_macOS__Foundation_NSFileManagerDelegate;
@class Foundation_InternalNSNotificationHandler;
@class Microsoft_macOS__Foundation_NSCacheDelegate;
@class Microsoft_macOS__Foundation_NSCoding;
@class Microsoft_macOS__Foundation_NSConnectionDelegate;
@class Microsoft_macOS__Foundation_NSCopying;
@class Microsoft_macOS__Foundation_NSExtensionRequestHandling;
@class Microsoft_macOS__Foundation_NSFilePresenter;
@class Microsoft_macOS__Foundation_NSKeyedArchiverDelegate;
@class Microsoft_macOS__Foundation_NSKeyedUnarchiverDelegate;
@class Microsoft_macOS__Foundation_NSPortDelegate;
@class Microsoft_macOS__Foundation_NSMachPortDelegate;
@class Microsoft_macOS__Foundation_NSMetadataQueryDelegate;
@class Microsoft_macOS__Foundation_NSMutableCopying;
@class Microsoft_macOS__Foundation_NSNetServiceBrowserDelegate;
@class Microsoft_macOS__Foundation_NSNetServiceDelegate;
@class Microsoft_macOS__Foundation_NSStreamDelegate;
@class Microsoft_macOS__Foundation_NSUrlConnectionDelegate;
@class Microsoft_macOS__Foundation_NSUrlConnectionDataDelegate;
@class Microsoft_macOS__Foundation_NSUrlConnectionDownloadDelegate;
@class Microsoft_macOS__Foundation_NSUrlDownloadDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionTaskDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionDataDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionDownloadDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionStreamDelegate;
@class Microsoft_macOS__Foundation_NSUrlSessionWebSocketDelegate;
@class Microsoft_macOS__Foundation_NSUserActivityDelegate;
@class Microsoft_macOS__Foundation_NSUserNotificationCenterDelegate;
@class Microsoft_macOS__Foundation_NSXpcListenerDelegate;
@class Microsoft_macOS__CoreWlan_CWEventDelegate;
@class Microsoft_macOS__CoreSpotlight_CSSearchableIndexDelegate;
@class Microsoft_macOS__CoreMidi_MidiCIProfileResponderDelegate;
@class Microsoft_macOS__CoreML_MLCustomModel;
@class Microsoft_macOS__CoreLocation_CLLocationManagerDelegate;
@class CoreImage_CIAccordionFoldTransition;
@class CoreImage_CICompositingFilter;
@class CoreImage_CIAdditionCompositing;
@class CoreImage_CIAffineFilter;
@class CoreImage_CIAffineClamp;
@class CoreImage_CIAffineTile;
@class CoreImage_CIAffineTransform;
@class CoreImage_CIReductionFilter;
@class CoreImage_CIAreaAverage;
@class CoreImage_CIAreaHistogram;
@class CoreImage_CIAreaLogarithmicHistogram;
@class CoreImage_CIAreaMaximum;
@class CoreImage_CIAreaMaximumAlpha;
@class CoreImage_CIAreaMinimum;
@class CoreImage_CIAreaMinimumAlpha;
@class CoreImage_CIAreaMinMax;
@class CoreImage_CIAreaMinMaxRed;
@class CoreImage_CIImageGenerator;
@class CoreImage_CIAttributedTextImageGenerator;
@class CoreImage_CICodeGenerator;
@class CoreImage_CIAztecCodeGenerator;
@class CoreImage_CIBarcodeGenerator;
@class CoreImage_CITransitionFilter;
@class CoreImage_CIBarsSwipeTransition;
@class CoreImage_CIBicubicScaleTransform;
@class CoreImage_CIBlendFilter;
@class CoreImage_CIBlendWithMask;
@class CoreImage_CIBlendWithAlphaMask;
@class CoreImage_CIBlendWithBlueMask;
@class CoreImage_CIBlendWithRedMask;
@class CoreImage_CIBloom;
@class CoreImage_CILinearBlur;
@class CoreImage_CIBokehBlur;
@class CoreImage_CIBoxBlur;
@class CoreImage_CIDistortionFilter;
@class CoreImage_CIBumpDistortion;
@class CoreImage_CIBumpDistortionLinear;
@class CoreImage_CICameraCalibrationLensCorrection;
@class CoreImage_CICheckerboardGenerator;
@class CoreImage_CICircleSplashDistortion;
@class CoreImage_CIScreenFilter;
@class CoreImage_CICircularScreen;
@class CoreImage_CICircularWrap;
@class CoreImage_CIClamp;
@class CoreImage_CICmykHalftone;
@class CoreImage_CICode128BarcodeGenerator;
@class CoreImage_CIColorAbsoluteDifference;
@class CoreImage_CIColorBlendMode;
@class CoreImage_CIColorBurnBlendMode;
@class CoreImage_CIColorClamp;
@class CoreImage_CIColorControls;
@class CoreImage_CIColorCrossPolynomial;
@class CoreImage_CIColorCube;
@class CoreImage_CIColorCubesMixedWithMask;
@class CoreImage_CIColorCubeWithColorSpace;
@class CoreImage_CIColorCurves;
@class CoreImage_CIColorDodgeBlendMode;
@class CoreImage_CIColorInvert;
@class CoreImage_CIColorMap;
@class CoreImage_CIColorMatrix;
@class CoreImage_CIColorMonochrome;
@class CoreImage_CIColorPolynomial;
@class CoreImage_CIColorPosterize;
@class CoreImage_CIColorThreshold;
@class CoreImage_CIColorThresholdOtsu;
@class CoreImage_CIColumnAverage;
@class CoreImage_CIComicEffect;
@class CoreImage_CIConstantColorGenerator;
@class CoreImage_CIConvolutionCore;
@class CoreImage_CIConvolution3X3;
@class CoreImage_CIConvolution5X5;
@class CoreImage_CIConvolution7X7;
@class CoreImage_CIConvolution9Horizontal;
@class CoreImage_CIConvolution9Vertical;
@class CoreImage_CIConvolutionRGB3X3;
@class CoreImage_CIConvolutionRGB5X5;
@class CoreImage_CIConvolutionRGB7X7;
@class CoreImage_CIConvolutionRGB9Horizontal;
@class CoreImage_CIConvolutionRGB9Vertical;
@class CoreImage_CICopyMachineTransition;
@class CoreImage_CICoreMLModelFilter;
@class CoreImage_CICrop;
@class CoreImage_CICrystallize;
@class CoreImage_CIDarkenBlendMode;
@class CoreImage_CIDepthBlurEffect;
@class CoreImage_CIDepthDisparityConverter;
@class CoreImage_CIDepthOfField;
@class CoreImage_CIDepthToDisparity;
@class CoreImage_CIDifferenceBlendMode;
@class CoreImage_CIDiscBlur;
@class CoreImage_CIDisintegrateWithMaskTransition;
@class CoreImage_CIDisparityToDepth;
@class CoreImage_CIDisplacementDistortion;
@class CoreImage_CIDissolveTransition;
@class CoreImage_CIDither;
@class CoreImage_CIDivideBlendMode;
@class CoreImage_CIDocumentEnhancer;
@class CoreImage_CIDotScreen;
@class CoreImage_CIDroste;
@class CoreImage_CIEdgePreserveUpsampleFilter;
@class CoreImage_CIEdges;
@class CoreImage_CIEdgeWork;
@class CoreImage_CITileFilter;
@class CoreImage_CIEightfoldReflectedTile;
@class CoreImage_CIExclusionBlendMode;
@class CoreImage_CIExposureAdjust;
@class CoreImage_CIFaceBalance;
@class CoreImage_CIFalseColor;
@class CoreImage_CIFlashTransition;
@class CoreImage_CIFourfoldReflectedTile;
@class CoreImage_CIFourfoldRotatedTile;
@class CoreImage_CIFourfoldTranslatedTile;
@class CoreImage_CIGaborGradients;
@class CoreImage_CIGammaAdjust;
@class CoreImage_CIGaussianBlur;
@class CoreImage_CIGaussianGradient;
@class CoreImage_CIGlassDistortion;
@class CoreImage_CIGlassLozenge;
@class CoreImage_CIGlideReflectedTile;
@class CoreImage_CIGloom;
@class CoreImage_CIGuidedFilter;
@class CoreImage_CIHardLightBlendMode;
@class CoreImage_CIHatchedScreen;
@class CoreImage_CIHeightFieldFromMask;
@class CoreImage_CIHexagonalPixellate;
@class CoreImage_CIHighlightShadowAdjust;
@class CoreImage_CIHistogramDisplayFilter;
@class CoreImage_CIHoleDistortion;
@class CoreImage_CIHueAdjust;
@class CoreImage_CIHueBlendMode;
@class CoreImage_CIHueSaturationValueGradient;
@protocol CIImageProvider;
@class CoreImage_CIKaleidoscope;
@class CoreImage_CIKeystoneCorrection;
@class CoreImage_CIKeystoneCorrectionCombined;
@class CoreImage_CIKeystoneCorrectionHorizontal;
@class CoreImage_CIKeystoneCorrectionVertical;
@class CoreImage_CIKMeans;
@class CoreImage_CILabDeltaE;
@class CoreImage_CILanczosScaleTransform;
@class CoreImage_CILenticularHaloGenerator;
@class CoreImage_CILightenBlendMode;
@class CoreImage_CILightTunnel;
@class CoreImage_CILinearBurnBlendMode;
@class CoreImage_CILinearDodgeBlendMode;
@class CoreImage_CILinearGradient;
@class CoreImage_CILinearLightBlendMode;
@class CoreImage_CILinearToSRGBToneCurve;
@class CoreImage_CILineOverlay;
@class CoreImage_CILineScreen;
@class CoreImage_CILuminosityBlendMode;
@class CoreImage_CIMaskedVariableBlur;
@class CoreImage_CIMaskToAlpha;
@class CoreImage_CIMaximumComponent;
@class CoreImage_CIMaximumCompositing;
@class CoreImage_CIMedianFilter;
@class CoreImage_CIMeshGenerator;
@class CoreImage_CIMinimumComponent;
@class CoreImage_CIMinimumCompositing;
@class CoreImage_CIMix;
@class CoreImage_CIModTransition;
@class CoreImage_CIMorphology;
@class CoreImage_CIMorphologyGradient;
@class CoreImage_CIMorphologyMaximum;
@class CoreImage_CIMorphologyMinimum;
@class CoreImage_CIMorphologyRectangle;
@class CoreImage_CIMorphologyRectangleMaximum;
@class CoreImage_CIMorphologyRectangleMinimum;
@class CoreImage_CIMotionBlur;
@class CoreImage_CIMultiplyBlendMode;
@class CoreImage_CIMultiplyCompositing;
@class CoreImage_CINinePartStretched;
@class CoreImage_CINinePartTiled;
@class CoreImage_CINoiseReduction;
@class CoreImage_CIOpTile;
@class CoreImage_CIOverlayBlendMode;
@class CoreImage_CIPageCurlTransition;
@class CoreImage_CIPageCurlWithShadowTransition;
@class CoreImage_CIPaletteCentroid;
@class CoreImage_CIPalettize;
@class CoreImage_CIParallelogramTile;
@class CoreImage_CIPdf417BarcodeGenerator;
@class CoreImage_CIPersonSegmentation;
@class CoreImage_CIPerspectiveTransform;
@class CoreImage_CIPerspectiveCorrection;
@class CoreImage_CIPerspectiveRotate;
@class CoreImage_CIPerspectiveTile;
@class CoreImage_CIPerspectiveTransformWithExtent;
@class CoreImage_CIPhotoEffect;
@class CoreImage_CIPhotoEffectChrome;
@class CoreImage_CIPhotoEffectFade;
@class CoreImage_CIPhotoEffectInstant;
@class CoreImage_CIPhotoEffectMono;
@class CoreImage_CIPhotoEffectNoir;
@class CoreImage_CIPhotoEffectProcess;
@class CoreImage_CIPhotoEffectTonal;
@class CoreImage_CIPhotoEffectTransfer;
@class CoreImage_CIPinchDistortion;
@class CoreImage_CIPinLightBlendMode;
@class CoreImage_CIPixellate;
@class CoreImage_CIPointillize;
@class CoreImage_CIQRCodeGenerator;
@class CoreImage_CIRadialGradient;
@class CoreImage_CIRandomGenerator;
@class CoreImage_CIRippleTransition;
@class CoreImage_CIRoundedRectangleGenerator;
@class CoreImage_CIRowAverage;
@class CoreImage_CISaliencyMapFilter;
@class CoreImage_CISampleNearest;
@class CoreImage_CISaturationBlendMode;
@class CoreImage_CIScreenBlendMode;
@class CoreImage_CISepiaTone;
@class CoreImage_CIShadedMaterial;
@class CoreImage_CISharpenLuminance;
@class CoreImage_CISixfoldReflectedTile;
@class CoreImage_CISixfoldRotatedTile;
@class CoreImage_CISmoothLinearGradient;
@class CoreImage_CISoftLightBlendMode;
@class CoreImage_CISourceAtopCompositing;
@class CoreImage_CISourceInCompositing;
@class CoreImage_CISourceOutCompositing;
@class CoreImage_CISourceOverCompositing;
@class CoreImage_CISpotColor;
@class CoreImage_CISpotLight;
@class CoreImage_CISRGBToneCurveToLinear;
@class CoreImage_CIStarShineGenerator;
@class CoreImage_CIStraightenFilter;
@class CoreImage_CIStretchCrop;
@class CoreImage_CIStripesGenerator;
@class CoreImage_CISubtractBlendMode;
@class CoreImage_CISunbeamsGenerator;
@class CoreImage_CISwipeTransition;
@class CoreImage_CITemperatureAndTint;
@class CoreImage_CITextImageGenerator;
@class CoreImage_CIThermal;
@class CoreImage_CIToneCurve;
@class CoreImage_CITorusLensDistortion;
@class CoreImage_CITriangleKaleidoscope;
@class CoreImage_CITriangleTile;
@class CoreImage_CITwelvefoldReflectedTile;
@class CoreImage_CITwirlDistortion;
@class CoreImage_CIUnsharpMask;
@class CoreImage_CIVibrance;
@class CoreImage_CIVignette;
@class CoreImage_CIVignetteEffect;
@class CoreImage_CIVividLightBlendMode;
@class CoreImage_CIVortexDistortion;
@class CoreImage_CIWhitePointAdjust;
@class CoreImage_CIXRay;
@class CoreImage_CIZoomBlur;
@class Microsoft_macOS__CoreBluetooth_CBCentralManagerDelegate;
@class Microsoft_macOS__CoreBluetooth_CBPeripheralDelegate;
@class Microsoft_macOS__CoreBluetooth_CBPeripheralManagerDelegate;
@class Microsoft_macOS__CoreAnimation_CALayerDelegate;
@class Microsoft_macOS__CoreAnimation_CAAnimationDelegate;
@class Microsoft_macOS__CoreAnimation_CAMediaTiming;
@class Microsoft_macOS__CloudKit_CKRecordValue;
@class Microsoft_macOS__ClassKit_CLSDataStoreDelegate;
@class Microsoft_macOS__BackgroundAssets_BADownloadManagerDelegate;
@class Microsoft_macOS__AuthenticationServices_ASAuthorizationControllerDelegate;
@class Microsoft_macOS__AuthenticationServices_ASWebAuthenticationSessionRequestDelegate;
@protocol NSMenuValidation;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSAlertDidEndDispatcher;
@class Microsoft_macOS__AppKit_NSAccessibilityCustomRotorItemSearchDelegate;
@class Microsoft_macOS__AppKit_NSAlertDelegate;
@class Microsoft_macOS__AppKit_NSAlignmentFeedbackToken;
@class Microsoft_macOS__AppKit_NSAnimationDelegate;
@class Microsoft_macOS__AppKit_NSAppearanceCustomization;
@class Microsoft_macOS__AppKit_NSBrowserDelegate;
@class Microsoft_macOS__AppKit_NSCandidateListTouchBarItemDelegate;
@class Microsoft_macOS__AppKit_NSSharingServiceDelegate;
@class Microsoft_macOS__AppKit_NSCloudSharingServiceDelegate;
@class Microsoft_macOS__AppKit_NSCollectionViewDataSource;
@class Microsoft_macOS__AppKit_NSCollectionViewDelegate;
@class Microsoft_macOS__AppKit_NSCollectionViewDelegateFlowLayout;
@class Microsoft_macOS__AppKit_NSCollectionViewElement;
@class Microsoft_macOS__AppKit_NSComboBoxCellDataSource;
@class Microsoft_macOS__AppKit_NSComboBoxDataSource;
@class Microsoft_macOS__AppKit_NSTextFieldDelegate;
@class Microsoft_macOS__AppKit_NSComboBoxDelegate;
@class Microsoft_macOS__AppKit_NSControlTextEditingDelegate;
@class Microsoft_macOS__AppKit_NSDatePickerCellDelegate;
@class Microsoft_macOS__AppKit_NSDockTilePlugIn;
@class Microsoft_macOS__AppKit_NSDraggingDestination;
@class Microsoft_macOS__AppKit_NSDraggingSource;
@class Microsoft_macOS__AppKit_NSDrawerDelegate;
@class Microsoft_macOS__AppKit_NSFilePromiseProviderDelegate;
@class Microsoft_macOS__AppKit_NSGestureRecognizerDelegate;
@class Microsoft_macOS__AppKit_NSHapticFeedbackPerformer;
@class Microsoft_macOS__AppKit_NSImageDelegate;
@protocol NSLayerDelegateContentsScaleUpdating;
@class Microsoft_macOS__AppKit_NSLayoutManagerDelegate;
@class Microsoft_macOS__AppKit_NSMatrixDelegate;
@class Microsoft_macOS__AppKit_NSMenuDelegate;
@class Microsoft_macOS__AppKit_NSOpenSavePanelDelegate;
@class Microsoft_macOS__AppKit_NSOutlineViewDataSource;
@class Microsoft_macOS__AppKit_NSOutlineViewDelegate;
@class Microsoft_macOS__AppKit_NSPageControllerDelegate;
@class Microsoft_macOS__AppKit_NSPasteboardItemDataProvider;
@class Microsoft_macOS__AppKit_NSPathCellDelegate;
@class Microsoft_macOS__AppKit_NSPathControlDelegate;
@class Microsoft_macOS__AppKit_NSPopoverDelegate;
@class Microsoft_macOS__AppKit_NSPrintPanelAccessorizing;
@class Microsoft_macOS__AppKit_NSRuleEditorDelegate;
@class Microsoft_macOS__AppKit_NSScrubberDataSource;
@class Microsoft_macOS__AppKit_NSScrubberDelegate;
@class Microsoft_macOS__AppKit_NSScrubberFlowLayoutDelegate;
@class Microsoft_macOS__AppKit_NSSearchFieldDelegate;
@class Microsoft_macOS__AppKit_NSSeguePerforming;
@class Microsoft_macOS__AppKit_NSSharingServicePickerDelegate;
@class Microsoft_macOS__AppKit_NSSharingServicePickerToolbarItemDelegate;
@class Microsoft_macOS__AppKit_NSSharingServicePickerTouchBarItemDelegate;
@class Microsoft_macOS__AppKit_NSSoundDelegate;
@class Microsoft_macOS__AppKit_NSSpeechRecognizerDelegate;
@class Microsoft_macOS__AppKit_NSSpeechSynthesizerDelegate;
@class Microsoft_macOS__AppKit_NSSplitViewDelegate;
@class Microsoft_macOS__AppKit_NSSpringLoadingDestination;
@class Microsoft_macOS__AppKit_NSStackViewDelegate;
@class Microsoft_macOS__AppKit_NSTableViewDataSource;
@class Microsoft_macOS__AppKit_NSTableViewDelegate;
@class Microsoft_macOS__AppKit_NSTableViewSource;
@class Microsoft_macOS__AppKit_NSTabViewDelegate;
@class Microsoft_macOS__AppKit_NSTextAttachmentContainer;
@class Microsoft_macOS__AppKit_NSTextContentManagerDelegate;
@class Microsoft_macOS__AppKit_NSTextContentStorageDelegate;
@class Microsoft_macOS__AppKit_NSTextDelegate;
@class Microsoft_macOS__AppKit_NSTextFinderBarContainer;
@class Microsoft_macOS__AppKit_NSTextInputClient;
@class Microsoft_macOS__AppKit_NSTextLayoutManagerDelegate;
@class Microsoft_macOS__AppKit_NSTextSelectionDataSource;
@class Microsoft_macOS__AppKit_NSTextStorageDelegate;
@class Microsoft_macOS__AppKit_NSTextViewDelegate;
@class Microsoft_macOS__AppKit_NSTextViewportLayoutControllerDelegate;
@class Microsoft_macOS__AppKit_NSTokenFieldCellDelegate;
@class Microsoft_macOS__AppKit_NSTokenFieldDelegate;
@class Microsoft_macOS__AppKit_NSToolbarDelegate;
@protocol NSToolTipOwner;
@class Microsoft_macOS__AppKit_NSTouchBarDelegate;
@class Microsoft_macOS__AppKit_NSViewControllerPresentationAnimator;
@class Microsoft_macOS__AppKit_NSWindowDelegate;
@class Microsoft_macOS__AppKit_NSWindowRestoration;
@class Microsoft_macOS__AVKit_AVCaptureViewDelegate;
@class Microsoft_macOS__AVKit_AVPictureInPictureControllerDelegate;
@class Microsoft_macOS__AVKit_AVPictureInPictureSampleBufferPlaybackDelegate;
@class Microsoft_macOS__AVKit_AVPlayerViewDelegate;
@class Microsoft_macOS__AVKit_AVPlayerViewPictureInPictureDelegate;
@class Microsoft_macOS__AVKit_AVRoutePickerViewDelegate;
@class Microsoft_macOS__AVFoundation_AVAudioPlayerDelegate;
@class AVFoundation_InternalAVAudioPlayerDelegate;
@class Microsoft_macOS__AVFoundation_AVAudioRecorderDelegate;
@class AVFoundation_InternalAVAudioRecorderDelegate;
@class Microsoft_macOS__AVFoundation_AVAssetDownloadDelegate;
@class Microsoft_macOS__AVFoundation_AVAssetResourceLoaderDelegate;
@class Microsoft_macOS__AVFoundation_AVAssetWriterDelegate;
@class Microsoft_macOS__AVFoundation_AVAsynchronousKeyValueLoading;
@class Microsoft_macOS__AVFoundation_AVAudio3DMixing;
@class Microsoft_macOS__AVFoundation_AVAudioStereoMixing;
@class Microsoft_macOS__AVFoundation_AVCaptureAudioDataOutputSampleBufferDelegate;
@class Microsoft_macOS__AVFoundation_AVCaptureFileOutputDelegate;
@class Microsoft_macOS__AVFoundation_AVCaptureFileOutputRecordingDelegate;
@class Microsoft_macOS__AVFoundation_AVCapturePhotoCaptureDelegate;
@class Microsoft_macOS__AVFoundation_AVCaptureVideoDataOutputSampleBufferDelegate;
@class Microsoft_macOS__AVFoundation_AVContentKeySessionDelegate;
@class Microsoft_macOS__AVFoundation_AVPlaybackCoordinatorPlaybackControlDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerItemOutputPushDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerItemLegibleOutputPushDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerItemMetadataCollectorPushDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerItemMetadataOutputPushDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerItemOutputPullDelegate;
@class Microsoft_macOS__AVFoundation_AVPlayerPlaybackCoordinatorDelegate;
@class Microsoft_macOS__AVFoundation_AVSpeechSynthesizerDelegate;
@class Microsoft_macOS__AVFoundation_AVVideoCompositing;
@class NotificationCenter_NCWidgetListViewController__NCWidgetListViewDelegate;
@class NotificationCenter_NCWidgetSearchViewController__NCWidgetSearchViewDelegate;
@class ExternalAccessory_EAAccessory__EAAccessoryDelegate;
@class StoreKit_SKRequest__SKRequestDelegate;
@class StoreKit_SKProductsRequest__SKProductsRequestDelegate;
@class StoreKit_SKStoreProductViewController__SKStoreProductViewControllerDelegate;
@class SpriteKit_SKPhysicsWorld__SKPhysicsContactDelegate;
@class ScriptingBridge_SBApplication__SBApplicationDelegate;
@class SceneKit_SCNPhysicsWorld__SCNPhysicsContactDelegate;
@class Photos_PHPhotoLibrary___phlib_observer;
@class PdfKit_PdfDocument__PdfDocumentDelegate;
@class PdfKit_PdfView__PdfViewDelegate;
@class PassKit_PKPaymentAuthorizationViewController__PKPaymentAuthorizationViewControllerDelegate;
@class MapKit_MKMapView__MKMapViewDelegate;
@class ImageKit_IKCameraDeviceView__IKCameraDeviceViewDelegate;
@class ImageKit_IKDeviceBrowserView__IKDeviceBrowserViewDelegate;
@class ImageKit_IKImageBrowserView__IKImageBrowserDelegate;
@class ImageKit_IKSaveOptions__IKSaveOptionsDelegate;
@class ImageKit_IKScannerDeviceView__IKScannerDeviceViewDelegate;
@class ImageCaptureCore_ICCameraDevice_DidReadDataFromFileAction;
@class ImageCaptureCore_ICCameraDevice_DidDownloadDataFromFileAction;
@class ImageCaptureCore_ICCameraDevice_DidSendPtpAction;
@class GameKit_GKMatch__GKMatchDelegate;
@class GameKit_GKGameCenterViewController__GKGameCenterControllerDelegate;
@class GameKit_GKAchievementViewController__GKAchievementViewControllerDelegate;
@class GameKit_GKChallengeEventHandler__GKChallengeEventHandlerDelegate;
@class GameKit_GKFriendRequestComposeViewController__GKFriendRequestComposeViewControllerDelegate;
@class GameKit_GKLeaderboardViewController__GKLeaderboardViewControllerDelegate;
@class GameKit_GKMatchmakerViewController__GKMatchmakerViewControllerDelegate;
@class WebKit_DomNode_DomNodeEventProxy;
@class WebKit_DomNode_DomNodeEventProxy2;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebDownloadDelegate;
@class WebKit_WebView__WebResourceLoadDelegate;
@class WebKit_WebView__WebUIDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class Foundation_NSKeyedArchiver__NSKeyedArchiverDelegate;
@class Foundation_NSKeyedUnarchiver__NSKeyedUnarchiverDelegate;
@class Foundation_NSNetService__NSNetServiceDelegate;
@class __NSObject_Disposer;
@class __XamarinObjectObserver;
@class Foundation_NSStream__NSStreamDelegate;
@class Foundation_NSThread_ActionThread;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class Foundation_NSCache__NSCacheDelegate;
@class Foundation_NSMetadataQuery__NSMetadataQueryDelegate;
@class Foundation_NSNetServiceBrowser__NSNetServiceBrowserDelegate;
@class Foundation_NSUserNotificationCenter__NSUserNotificationCenterDelegate;
@class CoreLocation_CLLocationManager__CLLocationManagerDelegate;
@class CoreBluetooth_CBCentralManager__CBCentralManagerDelegate;
@class CoreBluetooth_CBPeripheral__CBPeripheralDelegate;
@class CoreBluetooth_CBPeripheralManager__CBPeripheralManagerDelegate;
@class CoreAnimation_CAAnimation__CAAnimationDelegate;
@class AppKit_NSApplication__NSApplicationDelegate;
@class AppKit_NSMatrix__NSMatrixDelegate;
@class AppKit_NSPathCell__NSPathCellDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class AppKit_NSAlert__NSAlertDelegate;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSComboBox__NSComboBoxDelegate;
@class __NSDocumentDuplicateCallback;
@class __NSGestureRecognizerToken;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class AppKit_NSGestureRecognizer__NSGestureRecognizerDelegate;
@class __NSClickGestureRecognizer;
@class __NSMagnificationGestureRecognizer;
@class __NSPanGestureRecognizer;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class AppKit_NSImage__NSImageDelegate;
@class AppKit_NSSharingService__NSSharingServiceDelegate;
@class AppKit_NSSound__NSSoundDelegate;
@class AppKit_NSTextStorage__NSTextStorageDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class AppKit_NSAnimation__NSAnimationDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class AppKit_NSDatePickerCell__NSDatePickerCellDelegate;
@class AppKit_NSDrawer__NSDrawerDelegate;
@class AppKit_NSPageController__NSPageControllerDelegate;
@class AppKit_NSRuleEditor__NSRuleEditorDelegate;
@class AppKit_NSSavePanel__NSOpenSavePanelDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSSharingServicePicker__NSSharingServicePickerDelegate;
@class AppKit_NSTabView__NSTabViewDelegate;
@class AppKit_NSText__NSTextDelegate;
@class AppKit_NSTextView__NSTextViewDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class AppKit_NSTouchBar__NSTouchBarDelegate;
@class AVFoundation_AVCaptureFileOutput_recordingProxy;
@class AVFoundation_AVSpeechSynthesizer__AVSpeechSynthesizerDelegate;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;

@interface Microsoft_macOS__AppKit_NSApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(id) init;
@end

@interface AppDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationWillTerminate:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ViewController : NSViewController {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(void) viewDidLoad;
	-(NSObject *) representedObject;
	-(void) setRepresentedObject:(NSObject *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Microsoft_macOS__Speech_SFSpeechRecognitionTaskDelegate : NSObject<SFSpeechRecognitionTaskDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Speech_SFSpeechRecognizerDelegate : NSObject<SFSpeechRecognizerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ShazamKit_SHSessionDelegate : NSObject<SHSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SharedWithYou_SWCollaborationViewDelegate : NSObject<SWCollaborationViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SharedWithYou_SWHighlightCenterDelegate : NSObject<SWHighlightCenterDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ReplayKit_RPBroadcastActivityControllerDelegate : NSObject<RPBroadcastActivityControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ReplayKit_RPBroadcastControllerDelegate : NSObject<RPBroadcastControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ReplayKit_RPPreviewViewControllerDelegate : NSObject<RPPreviewViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ReplayKit_RPScreenRecorderDelegate : NSObject<RPScreenRecorderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PushKit_PKPushRegistryDelegate : NSObject<PKPushRegistryDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PhotosUI_PHLivePhotoViewDelegate : NSObject<PHLivePhotoViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PhotosUI_PHPickerViewControllerDelegate : NSObject<PHPickerViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PhotosUI_PHProjectTypeDescriptionDataSource : NSObject<PHProjectTypeDescriptionDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__NotificationCenter_NCWidgetListViewDelegate : NSObject<NCWidgetListViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__NotificationCenter_NCWidgetProviding : NSObject<NCWidgetProviding> {
}
	-(id) init;
@end

@interface Microsoft_macOS__NotificationCenter_NCWidgetSearchViewDelegate : NSObject<NCWidgetSearchViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__IntentsUI_INUIAddVoiceShortcutButtonDelegate : NSObject<INUIAddVoiceShortcutButtonDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__IntentsUI_INUIAddVoiceShortcutViewControllerDelegate : NSObject<INUIAddVoiceShortcutViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__IntentsUI_INUIEditVoiceShortcutViewControllerDelegate : NSObject<INUIEditVoiceShortcutViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ExternalAccessory_EAAccessoryDelegate : NSObject<EAAccessoryDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ExtensionKit_EXHostViewControllerDelegate : NSObject<EXHostViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ContactsUI_CNContactPickerDelegate : NSObject<CNContactPickerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AutomaticAssessmentConfiguration_AEAssessmentSessionDelegate : NSObject<AEAssessmentSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__VideoSubscriberAccount_VSAccountManagerDelegate : NSObject<VSAccountManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__UserNotifications_UNUserNotificationCenterDelegate : NSObject<UNUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__StoreKit_SKPaymentQueueDelegate : NSObject<SKPaymentQueueDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__StoreKit_SKPaymentTransactionObserver : NSObject<SKPaymentTransactionObserver> {
}
	-(id) init;
@end

@interface Microsoft_macOS__StoreKit_SKRequestDelegate : NSObject<SKRequestDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__StoreKit_SKProductsRequestDelegate : NSObject<SKProductsRequestDelegate, SKRequestDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__StoreKit_SKStoreProductViewControllerDelegate : NSObject<SKStoreProductViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SpriteKit_SKPhysicsContactDelegate : NSObject<SKPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SpriteKit_SKSceneDelegate : NSObject<SKSceneDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SpriteKit_SKViewDelegate : NSObject<SKViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ScriptingBridge_SBApplicationDelegate : NSObject<SBApplicationDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ScreenCaptureKit_SCStreamDelegate : NSObject<SCStreamDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNAnimatable : NSObject<SCNAnimatable> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNActionable : NSObject<SCNActionable> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNAvoidOccluderConstraintDelegate : NSObject<SCNAvoidOccluderConstraintDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNBoundingVolume : NSObject<SCNBoundingVolume> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNCameraControllerDelegate : NSObject<SCNCameraControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNNodeRendererDelegate : NSObject<SCNNodeRendererDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNPhysicsContactDelegate : NSObject<SCNPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNProgramDelegate : NSObject<SCNProgramDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNSceneExportDelegate : NSObject<SCNSceneExportDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNSceneRenderer : NSObject<SCNSceneRenderer> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNSceneRendererDelegate : NSObject<SCNSceneRendererDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNShadable : NSObject<SCNShadable> {
}
	-(id) init;
@end

@interface Microsoft_macOS__SceneKit_SCNTechniqueSupport : NSObject<SCNTechniqueSupport> {
}
	-(id) init;
@end

@interface Microsoft_macOS__QuickLookUI_QLPreviewItem : NSObject<QLPreviewItem> {
}
	-(id) init;
@end

@interface Microsoft_macOS__QuickLookUI_QLPreviewPanelDataSource : NSObject<QLPreviewPanelDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__QuickLookUI_QLPreviewPanelDelegate : NSObject<QLPreviewPanelDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Photos_PHPhotoLibraryChangeObserver : NSObject<PHPhotoLibraryChangeObserver> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PdfKit_PdfDocumentDelegate : NSObject<PDFDocumentDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PdfKit_PdfViewDelegate : NSObject<PDFViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PassKit_PKPaymentAuthorizationControllerDelegate : NSObject<PKPaymentAuthorizationControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PassKit_PKPaymentAuthorizationViewControllerDelegate : NSObject<PKPaymentAuthorizationViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__PassKit_PKVehicleConnectionDelegate : NSObject<PKVehicleConnectionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__NetworkExtension_NWTcpConnectionAuthenticationDelegate : NSObject<NWTCPConnectionAuthenticationDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MultipeerConnectivity_MCAdvertiserAssistantDelegate : NSObject<MCAdvertiserAssistantDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MultipeerConnectivity_MCBrowserViewControllerDelegate : NSObject<MCBrowserViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MultipeerConnectivity_MCNearbyServiceAdvertiserDelegate : NSObject<MCNearbyServiceAdvertiserDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MultipeerConnectivity_MCNearbyServiceBrowserDelegate : NSObject<MCNearbyServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MultipeerConnectivity_MCSessionDelegate : NSObject<MCSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ModelIO_MDLLightProbeIrradianceDataSource : NSObject<MDLLightProbeIrradianceDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MetalPerformanceShaders_MPSCnnBatchNormalizationDataSource : NSObject<MPSCNNBatchNormalizationDataSource> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface Microsoft_macOS__MetalPerformanceShaders_MPSCnnConvolutionDataSource : NSObject<MPSCNNConvolutionDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MetalPerformanceShaders_MPSCnnInstanceNormalizationDataSource : NSObject<MPSCNNInstanceNormalizationDataSource> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface Microsoft_macOS__MetalKit_MTKViewDelegate : NSObject<MTKViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Metal_MTLCaptureScope : NSObject<MTLCaptureScope> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Metal_MTLDrawable : NSObject<MTLDrawable> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MapKit_MKAnnotation : NSObject<MKAnnotation> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MapKit_MKLocalSearchCompleterDelegate : NSObject<MKLocalSearchCompleterDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MapKit_MKLookAroundViewControllerDelegate : NSObject<MKLookAroundViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MapKit_MKMapViewDelegate : NSObject<MKMapViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__MapKit_MKOverlay : NSObject<MKOverlay, MKAnnotation> {
}
	-(id) init;
@end

@interface Microsoft_macOS__JavaScriptCore_JSExport : NSObject<JSExport> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKCameraDeviceViewDelegate : NSObject<IKCameraDeviceViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKDeviceBrowserViewDelegate : NSObject<IKDeviceBrowserViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKFilterCustomUIProvider : NSObject<IKFilterCustomUIProvider> {
}
	-(id) init;
@end

@protocol IKImageBrowserDataSource
	@required -(void *) numberOfItemsInImageBrowser:(IKImageBrowserView *)p0;
	@required -(id) imageBrowser:(IKImageBrowserView *)p0 itemAtIndex:(void *)p1;
@end

@interface Microsoft_macOS__ImageKit_IKImageBrowserDataSource : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserDelegate
@end

@interface Microsoft_macOS__ImageKit_IKImageBrowserDelegate : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserItem
	@required -(NSString *) imageUID;
	@required -(NSString *) imageRepresentationType;
	@required -(NSObject *) imageRepresentation;
@end

@interface Microsoft_macOS__ImageKit_IKImageBrowserItem : NSObject {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKImageEditPanelDataSource : NSObject<IKImageEditPanelDataSource> {
}
	-(id) init;
@end

@protocol IKSaveOptionsDelegate
@end

@interface Microsoft_macOS__ImageKit_IKSaveOptionsDelegate : NSObject {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKScannerDeviceViewDelegate : NSObject<IKScannerDeviceViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageKit_IKSlideshowDataSource : NSObject<IKSlideshowDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageCaptureCore_ICCameraDeviceDelegate : NSObject<ICCameraDeviceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageCaptureCore_ICCameraDeviceDownloadDelegate : NSObject<ICCameraDeviceDownloadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageCaptureCore_ICDeviceBrowserDelegate : NSObject<ICDeviceBrowserDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageCaptureCore_ICDeviceDelegate : NSObject<ICDeviceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ImageCaptureCore_ICScannerDeviceDelegate : NSObject<ICScannerDeviceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__HealthKit_HKLiveWorkoutBuilderDelegate : NSObject<HKLiveWorkoutBuilderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__HealthKit_HKWorkoutSessionDelegate : NSObject<HKWorkoutSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameplayKit_GKAgentDelegate : NSObject<GKAgentDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKAchievementViewControllerDelegate : NSObject<GKAchievementViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKChallengeEventHandlerDelegate : NSObject<GKChallengeEventHandlerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKChallengeListener : NSObject<GKChallengeListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKChallengesViewControllerDelegate : NSObject<GKChallengesViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKFriendRequestComposeViewControllerDelegate : NSObject<GKFriendRequestComposeViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKGameCenterControllerDelegate : NSObject<GKGameCenterControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKInviteEventListener : NSObject<GKInviteEventListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKLeaderboardViewControllerDelegate : NSObject<GKLeaderboardViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKLocalPlayerListener : NSObject<GKLocalPlayerListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKMatchDelegate : NSObject<GKMatchDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKMatchmakerViewControllerDelegate : NSObject<GKMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKSavedGameListener : NSObject<GKSavedGameListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKSessionDelegate : NSObject<GKSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKTurnBasedEventHandlerDelegate : NSObject<GKTurnBasedEventHandlerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKTurnBasedEventListener : NSObject<GKTurnBasedEventListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GameKit_GKTurnBasedMatchmakerViewControllerDelegate : NSObject<GKTurnBasedMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__GLKit_GLKNamedEffect : NSObject<GLKNamedEffect> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebPolicyDelegate : NSObject<WebPolicyDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_DomEventListener : NSObject<DOMEventListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_DomEventTarget : NSObject<DOMEventTarget> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_DomNodeFilter : NSObject<DOMNodeFilter> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebDocumentRepresentation : NSObject<WebDocumentRepresentation> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebDownloadDelegate : NSObject<WebDownloadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebFrameLoadDelegate : NSObject<WebFrameLoadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebOpenPanelResultListener : NSObject<WebOpenPanelResultListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebPolicyDecisionListener : NSObject<WebPolicyDecisionListener> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebResourceLoadDelegate : NSObject<WebResourceLoadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WebUIDelegate : NSObject<WebUIDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WKDownloadDelegate : NSObject<WKDownloadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WKNavigationDelegate : NSObject<WKNavigationDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WKScriptMessageHandler : NSObject<WKScriptMessageHandler> {
}
	-(id) init;
@end

@interface Microsoft_macOS__WebKit_WKUIDelegate : NSObject<WKUIDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSFileManagerDelegate : NSObject<NSFileManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSCacheDelegate : NSObject<NSCacheDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSCoding : NSObject<NSCoding> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface Microsoft_macOS__Foundation_NSConnectionDelegate : NSObject<NSConnectionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSCopying : NSObject<NSCopying> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSExtensionRequestHandling : NSObject<NSExtensionRequestHandling> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSFilePresenter : NSObject<NSFilePresenter> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSKeyedArchiverDelegate : NSObject<NSKeyedArchiverDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSKeyedUnarchiverDelegate : NSObject<NSKeyedUnarchiverDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSPortDelegate : NSObject<NSPortDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSMachPortDelegate : NSObject<NSMachPortDelegate, NSPortDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSMetadataQueryDelegate : NSObject<NSMetadataQueryDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSMutableCopying : NSObject<NSMutableCopying> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSNetServiceBrowserDelegate : NSObject<NSNetServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSNetServiceDelegate : NSObject<NSNetServiceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSStreamDelegate : NSObject<NSStreamDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlConnectionDelegate : NSObject<NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlConnectionDataDelegate : NSObject<NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlConnectionDownloadDelegate : NSObject<NSURLConnectionDownloadDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlDownloadDelegate : NSObject<NSURLDownloadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionDelegate : NSObject<NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionTaskDelegate : NSObject<NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionDataDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionDownloadDelegate : NSObject<NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionStreamDelegate : NSObject<NSURLSessionStreamDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUrlSessionWebSocketDelegate : NSObject<NSURLSessionWebSocketDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUserActivityDelegate : NSObject<NSUserActivityDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSUserNotificationCenterDelegate : NSObject<NSUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__Foundation_NSXpcListenerDelegate : NSObject<NSXPCListenerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreWlan_CWEventDelegate : NSObject<CWEventDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreSpotlight_CSSearchableIndexDelegate : NSObject<CSSearchableIndexDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreMidi_MidiCIProfileResponderDelegate : NSObject<MIDICIProfileResponderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreML_MLCustomModel : NSObject<MLCustomModel> {
}
	-(id) init;
	-(id) initWithModelDescription:(MLModelDescription *)p0 parameterDictionary:(NSDictionary <NSString *, NSObject *>*)p1 error:(NSError **)p2;
@end

@interface Microsoft_macOS__CoreLocation_CLLocationManagerDelegate : NSObject<CLLocationManagerDelegate> {
}
	-(id) init;
@end

@interface CoreImage_CIAccordionFoldTransition : CIFilter<CIAccordionFoldTransition> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(float) bottomHeight;
	-(void) setBottomHeight:(float)p0;
	-(float) numberOfFolds;
	-(void) setNumberOfFolds:(float)p0;
	-(float) foldShadowAmount;
	-(void) setFoldShadowAmount:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICompositingFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAdditionCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineFilter : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineClamp : CoreImage_CIAffineFilter<CIAffineClamp, CIFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGAffineTransform) transform;
	-(void) setTransform:(CGAffineTransform)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTile : CoreImage_CIAffineFilter<CIAffineTile, CIFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGAffineTransform) transform;
	-(void) setTransform:(CGAffineTransform)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTransform : CoreImage_CIAffineFilter<CIFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIReductionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaAverage : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaHistogram : CIFilter<CIAreaHistogram> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(void *) count;
	-(void) setCount:(void *)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaLogarithmicHistogram : CIFilter<CIAreaLogarithmicHistogram> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(void *) count;
	-(void) setCount:(void *)p0;
	-(float) minimumStop;
	-(void) setMinimumStop:(float)p0;
	-(float) maximumStop;
	-(void) setMaximumStop:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximum : CoreImage_CIReductionFilter<CIAreaMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximumAlpha : CoreImage_CIReductionFilter<CIAreaMaximumAlpha> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimum : CoreImage_CIReductionFilter<CIAreaReductionFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimumAlpha : CoreImage_CIReductionFilter<CIAreaReductionFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMax : CoreImage_CIReductionFilter<CIAreaReductionFilter> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMaxRed : CoreImage_CIAreaMaximum<CIAreaMinMaxRed, CIAreaMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIImageGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAttributedTextImageGenerator : CoreImage_CIImageGenerator<CIAttributedTextImageGenerator> {
}
	-(NSAttributedString *) text;
	-(void) setText:(NSAttributedString *)p0;
	-(float) scaleFactor;
	-(void) setScaleFactor:(float)p0;
	-(float) padding;
	-(void) setPadding:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAztecCodeGenerator : CoreImage_CICodeGenerator<CIAztecCodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) correctionLevel;
	-(void) setCorrectionLevel:(float)p0;
	-(float) layers;
	-(void) setLayers:(float)p0;
	-(float) compactStyle;
	-(void) setCompactStyle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarcodeGenerator : CIFilter<CIBarcodeGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIBarcodeDescriptor *) barcodeDescriptor;
	-(void) setBarcodeDescriptor:(CIBarcodeDescriptor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITransitionFilter : CIFilter<CITransitionFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarsSwipeTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBicubicScaleTransform : CIFilter<CIBicubicScaleTransform> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) aspectRatio;
	-(void) setAspectRatio:(float)p0;
	-(float) parameterB;
	-(void) setParameterB:(float)p0;
	-(float) parameterC;
	-(void) setParameterC:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithMask : CoreImage_CIBlendFilter<CIBlendWithMask> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) backgroundImage;
	-(void) setBackgroundImage:(CIImage *)p0;
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithAlphaMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithBlueMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithRedMask : CoreImage_CIBlendWithMask<CIBlendWithMask> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBloom : CIFilter<CIBloom> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBokehBlur : CoreImage_CILinearBlur<CIBokehBlur> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) ringAmount;
	-(void) setRingAmount:(float)p0;
	-(float) ringSize;
	-(void) setRingSize:(float)p0;
	-(float) softness;
	-(void) setSoftness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBoxBlur : CIFilter<CIBoxBlur> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDistortionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortion : CoreImage_CIDistortionFilter<CIBumpDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortionLinear : CoreImage_CIDistortionFilter<CIBumpDistortionLinear> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICameraCalibrationLensCorrection : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICheckerboardGenerator : CIFilter<CICheckerboardGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircleSplashDistortion : CoreImage_CIDistortionFilter<CICircleSplashDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularScreen : CoreImage_CIScreenFilter<CICircularScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularWrap : CIFilter<CICircularWrap> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICmykHalftone : CIFilter<CICMYKHalftone> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(float) grayComponentReplacement;
	-(void) setGrayComponentReplacement:(float)p0;
	-(float) underColorRemoval;
	-(void) setUnderColorRemoval:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICode128BarcodeGenerator : CoreImage_CICodeGenerator<CICode128BarcodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) quietSpace;
	-(void) setQuietSpace:(float)p0;
	-(float) barcodeHeight;
	-(void) setBarcodeHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorAbsoluteDifference : CIFilter<CIColorAbsoluteDifference> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) inputImage2;
	-(void) setInputImage2:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorClamp : CIFilter<CIColorClamp> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) minComponents;
	-(void) setMinComponents:(CIVector *)p0;
	-(CIVector *) maxComponents;
	-(void) setMaxComponents:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorControls : CIFilter<CIColorControls> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) saturation;
	-(void) setSaturation:(float)p0;
	-(float) brightness;
	-(void) setBrightness:(float)p0;
	-(float) contrast;
	-(void) setContrast:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCrossPolynomial : CIFilter<CIColorCrossPolynomial> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) redCoefficients;
	-(void) setRedCoefficients:(CIVector *)p0;
	-(CIVector *) greenCoefficients;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(CIVector *) blueCoefficients;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCube : CIFilter<CIColorCube> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cubeData;
	-(void) setCubeData:(NSData *)p0;
	-(BOOL) extrapolate;
	-(void) setExtrapolate:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubesMixedWithMask : CIFilter<CIColorCubesMixedWithMask> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cube0Data;
	-(void) setCube0Data:(NSData *)p0;
	-(NSData *) cube1Data;
	-(void) setCube1Data:(NSData *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(BOOL) extrapolate;
	-(void) setExtrapolate:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubeWithColorSpace : CoreImage_CIColorCube<CIColorCubeWithColorSpace, CIColorCube> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) cubeDimension;
	-(void) setCubeDimension:(float)p0;
	-(NSData *) cubeData;
	-(void) setCubeData:(NSData *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(BOOL) extrapolate;
	-(void) setExtrapolate:(BOOL)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCurves : CIFilter<CIColorCurves> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(NSData *) curvesData;
	-(void) setCurvesData:(NSData *)p0;
	-(CIVector *) curvesDomain;
	-(void) setCurvesDomain:(CIVector *)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorInvert : CIFilter<CIColorInvert> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMap : CIFilter<CIColorMap> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) gradientImage;
	-(void) setGradientImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMatrix : CIFilter<CIColorMatrix> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) RVector;
	-(void) setRVector:(CIVector *)p0;
	-(CIVector *) GVector;
	-(void) setGVector:(CIVector *)p0;
	-(CIVector *) BVector;
	-(void) setBVector:(CIVector *)p0;
	-(CIVector *) AVector;
	-(void) setAVector:(CIVector *)p0;
	-(CIVector *) biasVector;
	-(void) setBiasVector:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMonochrome : CIFilter<CIColorMonochrome> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPolynomial : CoreImage_CIColorCrossPolynomial<CIColorPolynomial, CIColorCrossPolynomial> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) redCoefficients;
	-(void) setRedCoefficients:(CIVector *)p0;
	-(CIVector *) greenCoefficients;
	-(void) setGreenCoefficients:(CIVector *)p0;
	-(CIVector *) blueCoefficients;
	-(void) setBlueCoefficients:(CIVector *)p0;
	-(CIVector *) alphaCoefficients;
	-(void) setAlphaCoefficients:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPosterize : CIFilter<CIColorPosterize> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) levels;
	-(void) setLevels:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorThreshold : CIFilter<CIColorThreshold> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) threshold;
	-(void) setThreshold:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorThresholdOtsu : CIFilter<CIColorThresholdOtsu> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColumnAverage : CoreImage_CIReductionFilter<CIColumnAverage> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIComicEffect : CIFilter<CIComicEffect> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConstantColorGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionCore : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution3X3 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution5X5 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution7X7 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Horizontal : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Vertical : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionRGB3X3 : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionRGB5X5 : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionRGB7X7 : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionRGB9Horizontal : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionRGB9Vertical : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICopyMachineTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICoreMLModelFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrystallize : CIFilter<CICrystallize> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDarkenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthBlurEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthDisparityConverter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthOfField : CIFilter<CIDepthOfField> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(float) saturation;
	-(void) setSaturation:(float)p0;
	-(float) unsharpMaskRadius;
	-(void) setUnsharpMaskRadius:(float)p0;
	-(float) unsharpMaskIntensity;
	-(void) setUnsharpMaskIntensity:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthToDisparity : CoreImage_CIDepthDisparityConverter<CIDepthToDisparity> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDifferenceBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDiscBlur : CIFilter<CIDiscBlur> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisintegrateWithMaskTransition : CoreImage_CITransitionFilter<CIDisintegrateWithMaskTransition, CITransitionFilter> {
}
	-(CIImage *) maskImage;
	-(void) setMaskImage:(CIImage *)p0;
	-(float) shadowRadius;
	-(void) setShadowRadius:(float)p0;
	-(float) shadowDensity;
	-(void) setShadowDensity:(float)p0;
	-(CGPoint) shadowOffset;
	-(void) setShadowOffset:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisparityToDepth : CoreImage_CIDepthDisparityConverter<CIDisparityToDepth> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisplacementDistortion : CIFilter<CIDisplacementDistortion> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) displacementImage;
	-(void) setDisplacementImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDissolveTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDither : CIFilter<CIDither> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDivideBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDocumentEnhancer : CIFilter<CIDocumentEnhancer> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDotScreen : CoreImage_CIScreenFilter<CIDotScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDroste : CIFilter<CIDroste> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) insetPoint0;
	-(void) setInsetPoint0:(CGPoint)p0;
	-(CGPoint) insetPoint1;
	-(void) setInsetPoint1:(CGPoint)p0;
	-(float) strands;
	-(void) setStrands:(float)p0;
	-(float) periodicity;
	-(void) setPeriodicity:(float)p0;
	-(float) rotation;
	-(void) setRotation:(float)p0;
	-(float) zoom;
	-(void) setZoom:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgePreserveUpsampleFilter : CIFilter<CIEdgePreserveUpsample> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) smallImage;
	-(void) setSmallImage:(CIImage *)p0;
	-(float) spatialSigma;
	-(void) setSpatialSigma:(float)p0;
	-(float) lumaSigma;
	-(void) setLumaSigma:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdges : CIFilter<CIEdges> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgeWork : CIFilter<CIEdgeWork> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITileFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEightfoldReflectedTile : CoreImage_CITileFilter<CIEightfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExclusionBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExposureAdjust : CIFilter<CIExposureAdjust> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) EV;
	-(void) setEV:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFaceBalance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFalseColor : CIFilter<CIFalseColor> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFlashTransition : CoreImage_CITransitionFilter<CIFlashTransition, CITransitionFilter> {
}
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) maxStriationRadius;
	-(void) setMaxStriationRadius:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) fadeThreshold;
	-(void) setFadeThreshold:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldReflectedTile : CoreImage_CITileFilter<CIFourfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldRotatedTile : CoreImage_CITileFilter<CIFourfoldRotatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldTranslatedTile : CoreImage_CITileFilter<CIFourfoldTranslatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaborGradients : CIFilter<CIGaborGradients> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGammaAdjust : CIFilter<CIGammaAdjust> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) power;
	-(void) setPower:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianBlur : CIFilter<CIGaussianBlur> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianGradient : CIFilter<CIGaussianGradient> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassDistortion : CIFilter<CIGlassDistortion> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) textureImage;
	-(void) setTextureImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassLozenge : CIFilter<CIGlassLozenge> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) refraction;
	-(void) setRefraction:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlideReflectedTile : CoreImage_CITileFilter<CIGlideReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGloom : CIFilter<CIGloom> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGuidedFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHardLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHatchedScreen : CoreImage_CIScreenFilter<CIHatchedScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHeightFieldFromMask : CIFilter<CIHeightFieldFromMask> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHexagonalPixellate : CIFilter<CIHexagonalPixellate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHighlightShadowAdjust : CIFilter<CIHighlightShadowAdjust> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) shadowAmount;
	-(void) setShadowAmount:(float)p0;
	-(float) highlightAmount;
	-(void) setHighlightAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHistogramDisplayFilter : CIFilter<CIHistogramDisplay> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) height;
	-(void) setHeight:(float)p0;
	-(float) highLimit;
	-(void) setHighLimit:(float)p0;
	-(float) lowLimit;
	-(void) setLowLimit:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHoleDistortion : CoreImage_CIDistortionFilter<CIHoleDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueAdjust : CIFilter<CIHueAdjust> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueSaturationValueGradient : CIFilter<CIHueSaturationValueGradient> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(float) value;
	-(void) setValue:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) softness;
	-(void) setSoftness:(float)p0;
	-(float) dither;
	-(void) setDither:(float)p0;
	-(id) colorSpace;
	-(void) setColorSpace:(id)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol CIImageProvider
	@required -(void) provideImageData:(void *)p0 bytesPerRow:(void *)p1 origin:(void *)p2 :(void *)p3 size:(void *)p4 :(void *)p5 userInfo:(NSObject *)p6;
@end

@interface CoreImage_CIKaleidoscope : CIFilter<CIKaleidoscope> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(void *) count;
	-(void) setCount:(void *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrection : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionCombined : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionCombined> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionHorizontal : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionHorizontal> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKeystoneCorrectionVertical : CoreImage_CIKeystoneCorrection<CIKeystoneCorrectionVertical> {
}
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIKMeans : CoreImage_CIReductionFilter<CIKMeans> {
}
	-(CIImage *) inputMeans;
	-(void) setInputMeans:(CIImage *)p0;
	-(void *) count;
	-(void) setCount:(void *)p0;
	-(float) passes;
	-(void) setPasses:(float)p0;
	-(BOOL) perceptual;
	-(void) setPerceptual:(BOOL)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILabDeltaE : CIFilter<CILabDeltaE> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) image2;
	-(void) setImage2:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILanczosScaleTransform : CIFilter<CILanczosScaleTransform> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) aspectRatio;
	-(void) setAspectRatio:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILenticularHaloGenerator : CIFilter<CILenticularHaloGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) haloRadius;
	-(void) setHaloRadius:(float)p0;
	-(float) haloWidth;
	-(void) setHaloWidth:(float)p0;
	-(float) haloOverlap;
	-(void) setHaloOverlap:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightTunnel : CIFilter<CILightTunnel> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) rotation;
	-(void) setRotation:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearGradient : CIFilter<CILinearGradient> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearLightBlendMode : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearToSRGBToneCurve : CIFilter<CILinearToSRGBToneCurve> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineOverlay : CIFilter<CILineOverlay> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) NRNoiseLevel;
	-(void) setNRNoiseLevel:(float)p0;
	-(float) NRSharpness;
	-(void) setNRSharpness:(float)p0;
	-(float) edgeIntensity;
	-(void) setEdgeIntensity:(float)p0;
	-(float) threshold;
	-(void) setThreshold:(float)p0;
	-(float) contrast;
	-(void) setContrast:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineScreen : CoreImage_CIScreenFilter<CILineScreen> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILuminosityBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskedVariableBlur : CIFilter<CIMaskedVariableBlur> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) mask;
	-(void) setMask:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskToAlpha : CIFilter<CIMaskToAlpha> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumComponent : CIFilter<CIMaximumComponent> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMedianFilter : CIFilter<CIMedian> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMeshGenerator : CIFilter<CIMeshGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(NSArray *) mesh;
	-(void) setMesh:(NSArray *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumComponent : CIFilter<CIMinimumComponent> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMix : CIFilter<CIMix> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) backgroundImage;
	-(void) setBackgroundImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIModTransition : CoreImage_CITransitionFilter<CIModTransition, CITransitionFilter> {
}
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) compression;
	-(void) setCompression:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphology : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyGradient : CoreImage_CIMorphology<CIMorphologyGradient> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMaximum : CoreImage_CIMorphology<CIMorphologyMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMinimum : CoreImage_CIMorphology<CIMorphologyMinimum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangle : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangleMaximum : CoreImage_CIMorphologyRectangle<CIMorphologyRectangleMaximum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) height;
	-(void) setHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyRectangleMinimum : CoreImage_CIMorphologyRectangle<CIMorphologyRectangleMinimum> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) height;
	-(void) setHeight:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMotionBlur : CoreImage_CILinearBlur<CIMotionBlur> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartStretched : CIFilter<CINinePartStretched> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) breakpoint0;
	-(void) setBreakpoint0:(CGPoint)p0;
	-(CGPoint) breakpoint1;
	-(void) setBreakpoint1:(CGPoint)p0;
	-(CGPoint) growAmount;
	-(void) setGrowAmount:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartTiled : CIFilter<CINinePartTiled> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) breakpoint0;
	-(void) setBreakpoint0:(CGPoint)p0;
	-(CGPoint) breakpoint1;
	-(void) setBreakpoint1:(CGPoint)p0;
	-(CGPoint) growAmount;
	-(void) setGrowAmount:(CGPoint)p0;
	-(BOOL) flipYTiles;
	-(void) setFlipYTiles:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINoiseReduction : CIFilter<CINoiseReduction> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) noiseLevel;
	-(void) setNoiseLevel:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOpTile : CoreImage_CITileFilter<CIOpTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOverlayBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlTransition : CoreImage_CITransitionFilter<CIPageCurlTransition, CITransitionFilter> {
}
	-(CIImage *) backsideImage;
	-(void) setBacksideImage:(CIImage *)p0;
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlWithShadowTransition : CIFilter<CIPageCurlWithShadowTransition> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) backsideImage;
	-(void) setBacksideImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) shadowSize;
	-(void) setShadowSize:(float)p0;
	-(float) shadowAmount;
	-(void) setShadowAmount:(float)p0;
	-(CGRect) shadowExtent;
	-(void) setShadowExtent:(CGRect)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPaletteCentroid : CIFilter<CIPaletteCentroid> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) paletteImage;
	-(void) setPaletteImage:(CIImage *)p0;
	-(BOOL) perceptual;
	-(void) setPerceptual:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPalettize : CIFilter<CIPalettize> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) paletteImage;
	-(void) setPaletteImage:(CIImage *)p0;
	-(BOOL) perceptual;
	-(void) setPerceptual:(BOOL)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIParallelogramTile : CoreImage_CITileFilter<CIParallelogramTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) acuteAngle;
	-(void) setAcuteAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPdf417BarcodeGenerator : CoreImage_CICodeGenerator<CIPDF417BarcodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(float) minWidth;
	-(void) setMinWidth:(float)p0;
	-(float) maxWidth;
	-(void) setMaxWidth:(float)p0;
	-(float) minHeight;
	-(void) setMinHeight:(float)p0;
	-(float) maxHeight;
	-(void) setMaxHeight:(float)p0;
	-(float) dataColumns;
	-(void) setDataColumns:(float)p0;
	-(float) rows;
	-(void) setRows:(float)p0;
	-(float) preferredAspectRatio;
	-(void) setPreferredAspectRatio:(float)p0;
	-(float) compactionMode;
	-(void) setCompactionMode:(float)p0;
	-(float) compactStyle;
	-(void) setCompactStyle:(float)p0;
	-(float) correctionLevel;
	-(void) setCorrectionLevel:(float)p0;
	-(float) alwaysSpecifyCompaction;
	-(void) setAlwaysSpecifyCompaction:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPersonSegmentation : CIFilter<CIPersonSegmentation> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(void *) qualityLevel;
	-(void) setQualityLevel:(void *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransform : CIFilter<CIPerspectiveTransform> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveCorrection : CoreImage_CIPerspectiveTransform<CIPerspectiveCorrection, CIPerspectiveTransform> {
}
	-(BOOL) crop;
	-(void) setCrop:(BOOL)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveRotate : CIFilter<CIPerspectiveRotate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) focalLength;
	-(void) setFocalLength:(float)p0;
	-(float) pitch;
	-(void) setPitch:(float)p0;
	-(float) yaw;
	-(void) setYaw:(float)p0;
	-(float) roll;
	-(void) setRoll:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTile : CIFilter<CIPerspectiveTile> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransformWithExtent : CoreImage_CIPerspectiveTransform<CIPerspectiveTransformWithExtent, CIPerspectiveTransform> {
}
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) topLeft;
	-(void) setTopLeft:(CGPoint)p0;
	-(CGPoint) topRight;
	-(void) setTopRight:(CGPoint)p0;
	-(CGPoint) bottomRight;
	-(void) setBottomRight:(CGPoint)p0;
	-(CGPoint) bottomLeft;
	-(void) setBottomLeft:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffect : CIFilter<CIPhotoEffect> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectChrome : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectFade : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectInstant : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectMono : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectNoir : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectProcess : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTonal : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTransfer : CoreImage_CIPhotoEffect<CIPhotoEffect> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinchDistortion : CoreImage_CIDistortionFilter<CIPinchDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPixellate : CIFilter<CIPixellate> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPointillize : CIFilter<CIPointillize> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIQRCodeGenerator : CoreImage_CICodeGenerator<CIQRCodeGenerator> {
}
	-(NSData *) message;
	-(void) setMessage:(NSData *)p0;
	-(NSString *) correctionLevel;
	-(void) setCorrectionLevel:(NSString *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRadialGradient : CIFilter<CIRadialGradient> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius0;
	-(void) setRadius0:(float)p0;
	-(float) radius1;
	-(void) setRadius1:(float)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRandomGenerator : CIFilter<CIRandomGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRippleTransition : CoreImage_CITransitionFilter<CIRippleTransition, CITransitionFilter> {
}
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) targetImage;
	-(void) setTargetImage:(CIImage *)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRoundedRectangleGenerator : CIFilter<CIRoundedRectangleGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRowAverage : CIFilter<CIRowAverage> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGRect) extent;
	-(void) setExtent:(CGRect)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaliencyMapFilter : CIFilter<CISaliencyMap> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISampleNearest : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaturationBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISepiaTone : CIFilter<CISepiaTone> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIShadedMaterial : CIFilter<CIShadedMaterial> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) shadingImage;
	-(void) setShadingImage:(CIImage *)p0;
	-(float) scale;
	-(void) setScale:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISharpenLuminance : CIFilter<CISharpenLuminance> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldReflectedTile : CoreImage_CITileFilter<CISixfoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldRotatedTile : CoreImage_CITileFilter<CISixfoldRotatedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISmoothLinearGradient : CoreImage_CILinearGradient<CISmoothLinearGradient, CILinearGradient> {
}
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISoftLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceAtopCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceInCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOutCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOverCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotColor : CIFilter<CISpotColor> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) centerColor1;
	-(void) setCenterColor1:(CIColor *)p0;
	-(CIColor *) replacementColor1;
	-(void) setReplacementColor1:(CIColor *)p0;
	-(float) closeness1;
	-(void) setCloseness1:(float)p0;
	-(float) contrast1;
	-(void) setContrast1:(float)p0;
	-(CIColor *) centerColor2;
	-(void) setCenterColor2:(CIColor *)p0;
	-(CIColor *) replacementColor2;
	-(void) setReplacementColor2:(CIColor *)p0;
	-(float) closeness2;
	-(void) setCloseness2:(float)p0;
	-(float) contrast2;
	-(void) setContrast2:(float)p0;
	-(CIColor *) centerColor3;
	-(void) setCenterColor3:(CIColor *)p0;
	-(CIColor *) replacementColor3;
	-(void) setReplacementColor3:(CIColor *)p0;
	-(float) closeness3;
	-(void) setCloseness3:(float)p0;
	-(float) contrast3;
	-(void) setContrast3:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotLight : CIFilter<CISpotLight> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) lightPosition;
	-(void) setLightPosition:(CIVector *)p0;
	-(CIVector *) lightPointsAt;
	-(void) setLightPointsAt:(CIVector *)p0;
	-(float) brightness;
	-(void) setBrightness:(float)p0;
	-(float) concentration;
	-(void) setConcentration:(float)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISRGBToneCurveToLinear : CIFilter<CISRGBToneCurveToLinear> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStarShineGenerator : CIFilter<CIStarShineGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) crossScale;
	-(void) setCrossScale:(float)p0;
	-(float) crossAngle;
	-(void) setCrossAngle:(float)p0;
	-(float) crossOpacity;
	-(void) setCrossOpacity:(float)p0;
	-(float) crossWidth;
	-(void) setCrossWidth:(float)p0;
	-(float) epsilon;
	-(void) setEpsilon:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStraightenFilter : CIFilter<CIStraighten> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStretchCrop : CIFilter<CIStretchCrop> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) size;
	-(void) setSize:(CGPoint)p0;
	-(float) cropAmount;
	-(void) setCropAmount:(float)p0;
	-(float) centerStretchAmount;
	-(void) setCenterStretchAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStripesGenerator : CIFilter<CIStripesGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color0;
	-(void) setColor0:(CIColor *)p0;
	-(CIColor *) color1;
	-(void) setColor1:(CIColor *)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) sharpness;
	-(void) setSharpness:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISubtractBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISunbeamsGenerator : CIFilter<CISunbeamsGenerator> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(float) sunRadius;
	-(void) setSunRadius:(float)p0;
	-(float) maxStriationRadius;
	-(void) setMaxStriationRadius:(float)p0;
	-(float) striationStrength;
	-(void) setStriationStrength:(float)p0;
	-(float) striationContrast;
	-(void) setStriationContrast:(float)p0;
	-(float) time;
	-(void) setTime:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISwipeTransition : CoreImage_CITransitionFilter<CITransitionFilter> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITemperatureAndTint : CIFilter<CITemperatureAndTint> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIVector *) neutral;
	-(void) setNeutral:(CIVector *)p0;
	-(CIVector *) targetNeutral;
	-(void) setTargetNeutral:(CIVector *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITextImageGenerator : CoreImage_CIImageGenerator<CITextImageGenerator> {
}
	-(NSString *) text;
	-(void) setText:(NSString *)p0;
	-(NSString *) fontName;
	-(void) setFontName:(NSString *)p0;
	-(float) fontSize;
	-(void) setFontSize:(float)p0;
	-(float) scaleFactor;
	-(void) setScaleFactor:(float)p0;
	-(float) padding;
	-(void) setPadding:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIThermal : CIFilter<CIThermal> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIToneCurve : CIFilter<CIToneCurve> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point0;
	-(void) setPoint0:(CGPoint)p0;
	-(CGPoint) point1;
	-(void) setPoint1:(CGPoint)p0;
	-(CGPoint) point2;
	-(void) setPoint2:(CGPoint)p0;
	-(CGPoint) point3;
	-(void) setPoint3:(CGPoint)p0;
	-(CGPoint) point4;
	-(void) setPoint4:(CGPoint)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITorusLensDistortion : CIFilter<CITorusLensDistortion> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(float) refraction;
	-(void) setRefraction:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleKaleidoscope : CIFilter<CITriangleKaleidoscope> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) point;
	-(void) setPoint:(CGPoint)p0;
	-(float) size;
	-(void) setSize:(float)p0;
	-(float) rotation;
	-(void) setRotation:(float)p0;
	-(float) decay;
	-(void) setDecay:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleTile : CoreImage_CITileFilter<CITriangleTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwelvefoldReflectedTile : CoreImage_CITileFilter<CITwelvefoldReflectedTile> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(float) width;
	-(void) setWidth:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwirlDistortion : CoreImage_CIDistortionFilter<CITwirlDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIUnsharpMask : CIFilter<CIUnsharpMask> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVibrance : CIFilter<CIVibrance> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignette : CIFilter<CIVignette> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignetteEffect : CIFilter<CIVignetteEffect> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) intensity;
	-(void) setIntensity:(float)p0;
	-(float) falloff;
	-(void) setFalloff:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVividLightBlendMode : CIFilter<CIFilter> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVortexDistortion : CoreImage_CIDistortionFilter<CIVortexDistortion> {
}
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) radius;
	-(void) setRadius:(float)p0;
	-(float) angle;
	-(void) setAngle:(float)p0;
	-(CIImage *) outputImage;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIWhitePointAdjust : CIFilter<CIWhitePointAdjust> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIColor *) color;
	-(void) setColor:(CIColor *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIXRay : CIFilter<CIXRay> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIZoomBlur : CIFilter<CIZoomBlur> {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(CIImage *) inputImage;
	-(void) setInputImage:(CIImage *)p0;
	-(CGPoint) center;
	-(void) setCenter:(CGPoint)p0;
	-(float) amount;
	-(void) setAmount:(float)p0;
	-(CIImage *) outputImage;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface Microsoft_macOS__CoreBluetooth_CBCentralManagerDelegate : NSObject<CBCentralManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreBluetooth_CBPeripheralDelegate : NSObject<CBPeripheralDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreBluetooth_CBPeripheralManagerDelegate : NSObject<CBPeripheralManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreAnimation_CALayerDelegate : NSObject<CALayerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreAnimation_CAAnimationDelegate : NSObject<CAAnimationDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CoreAnimation_CAMediaTiming : NSObject<CAMediaTiming> {
}
	-(id) init;
@end

@interface Microsoft_macOS__CloudKit_CKRecordValue : NSObject<CKRecordValue> {
}
	-(id) init;
@end

@interface Microsoft_macOS__ClassKit_CLSDataStoreDelegate : NSObject<CLSDataStoreDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__BackgroundAssets_BADownloadManagerDelegate : NSObject<BADownloadManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AuthenticationServices_ASAuthorizationControllerDelegate : NSObject<ASAuthorizationControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AuthenticationServices_ASWebAuthenticationSessionRequestDelegate : NSObject<ASWebAuthenticationSessionRequestDelegate> {
}
	-(id) init;
@end

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface Microsoft_macOS__AppKit_NSAccessibilityCustomRotorItemSearchDelegate : NSObject<NSAccessibilityCustomRotorItemSearchDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSAlertDelegate : NSObject<NSAlertDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSAlignmentFeedbackToken : NSObject<NSAlignmentFeedbackToken> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSAnimationDelegate : NSObject<NSAnimationDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSAppearanceCustomization : NSObject<NSAppearanceCustomization> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSBrowserDelegate : NSObject<NSBrowserDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCandidateListTouchBarItemDelegate : NSObject<NSCandidateListTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSharingServiceDelegate : NSObject<NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCloudSharingServiceDelegate : NSObject<NSCloudSharingServiceDelegate, NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCollectionViewDataSource : NSObject<NSCollectionViewDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCollectionViewDelegate : NSObject<NSCollectionViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCollectionViewDelegateFlowLayout : NSObject<NSCollectionViewDelegateFlowLayout> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSCollectionViewElement : NSObject<NSCollectionViewElement> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSComboBoxCellDataSource : NSObject<NSComboBoxCellDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSComboBoxDataSource : NSObject<NSComboBoxDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextFieldDelegate : NSObject<NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSComboBoxDelegate : NSObject<NSComboBoxDelegate, NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSControlTextEditingDelegate : NSObject<NSControlTextEditingDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSDatePickerCellDelegate : NSObject<NSDatePickerCellDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSDockTilePlugIn : NSObject<NSDockTilePlugIn> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSDraggingDestination : NSObject<NSDraggingDestination> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSDraggingSource : NSObject<NSDraggingSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSDrawerDelegate : NSObject<NSDrawerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSFilePromiseProviderDelegate : NSObject<NSFilePromiseProviderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSGestureRecognizerDelegate : NSObject<NSGestureRecognizerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSHapticFeedbackPerformer : NSObject<NSHapticFeedbackPerformer> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSImageDelegate : NSObject<NSImageDelegate> {
}
	-(id) init;
@end

@protocol NSLayerDelegateContentsScaleUpdating
@end

@interface Microsoft_macOS__AppKit_NSLayoutManagerDelegate : NSObject<NSLayoutManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSMatrixDelegate : NSObject<NSMatrixDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSMenuDelegate : NSObject<NSMenuDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSOpenSavePanelDelegate : NSObject<NSOpenSavePanelDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSOutlineViewDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSOutlineViewDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPageControllerDelegate : NSObject<NSPageControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPasteboardItemDataProvider : NSObject<NSPasteboardItemDataProvider> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPathCellDelegate : NSObject<NSPathCellDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPathControlDelegate : NSObject<NSPathControlDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPopoverDelegate : NSObject<NSPopoverDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSPrintPanelAccessorizing : NSObject<NSPrintPanelAccessorizing> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSRuleEditorDelegate : NSObject<NSRuleEditorDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSScrubberDataSource : NSObject<NSScrubberDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSScrubberDelegate : NSObject<NSScrubberDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSScrubberFlowLayoutDelegate : NSObject<NSScrubberFlowLayoutDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSearchFieldDelegate : NSObject<NSSearchFieldDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSeguePerforming : NSObject<NSSeguePerforming> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSharingServicePickerDelegate : NSObject<NSSharingServicePickerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSharingServicePickerToolbarItemDelegate : NSObject<NSSharingServicePickerToolbarItemDelegate, NSSharingServicePickerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSharingServicePickerTouchBarItemDelegate : NSObject<NSSharingServicePickerTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSoundDelegate : NSObject<NSSoundDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSpeechRecognizerDelegate : NSObject<NSSpeechRecognizerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSpeechSynthesizerDelegate : NSObject<NSSpeechSynthesizerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSplitViewDelegate : NSObject<NSSplitViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSSpringLoadingDestination : NSObject<NSSpringLoadingDestination> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSStackViewDelegate : NSObject<NSStackViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTableViewDataSource : NSObject<NSTableViewDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTableViewDelegate : NSObject<NSTableViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTableViewSource : NSObject {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTabViewDelegate : NSObject<NSTabViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextAttachmentContainer : NSObject<NSTextAttachmentContainer> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextContentManagerDelegate : NSObject<NSTextContentManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextContentStorageDelegate : NSObject<NSTextContentStorageDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextDelegate : NSObject<NSTextDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextFinderBarContainer : NSObject<NSTextFinderBarContainer> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextInputClient : NSObject<NSTextInputClient> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextLayoutManagerDelegate : NSObject<NSTextLayoutManagerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextSelectionDataSource : NSObject<NSTextSelectionDataSource> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextStorageDelegate : NSObject<NSTextStorageDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextViewDelegate : NSObject<NSTextViewDelegate, NSTextDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTextViewportLayoutControllerDelegate : NSObject<NSTextViewportLayoutControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTokenFieldCellDelegate : NSObject<NSTokenFieldCellDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSTokenFieldDelegate : NSObject<NSTokenFieldDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSToolbarDelegate : NSObject<NSToolbarDelegate> {
}
	-(id) init;
@end

@protocol NSToolTipOwner
	@required -(NSString *) view:(NSView *)p0 stringForToolTip:(void *)p1 point:(CGPoint)p2 userData:(void *)p3;
@end

@interface Microsoft_macOS__AppKit_NSTouchBarDelegate : NSObject<NSTouchBarDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSViewControllerPresentationAnimator : NSObject<NSViewControllerPresentationAnimator> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSWindowDelegate : NSObject<NSWindowDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AppKit_NSWindowRestoration : NSObject<NSWindowRestoration> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVCaptureViewDelegate : NSObject<AVCaptureViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVPictureInPictureControllerDelegate : NSObject<AVPictureInPictureControllerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVPictureInPictureSampleBufferPlaybackDelegate : NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVPlayerViewDelegate : NSObject<AVPlayerViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVPlayerViewPictureInPictureDelegate : NSObject<AVPlayerViewPictureInPictureDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVKit_AVRoutePickerViewDelegate : NSObject<AVRoutePickerViewDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAudioPlayerDelegate : NSObject<AVAudioPlayerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAudioRecorderDelegate : NSObject<AVAudioRecorderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAssetDownloadDelegate : NSObject<AVAssetDownloadDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAssetResourceLoaderDelegate : NSObject<AVAssetResourceLoaderDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAssetWriterDelegate : NSObject<AVAssetWriterDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAsynchronousKeyValueLoading : NSObject<AVAsynchronousKeyValueLoading> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAudio3DMixing : NSObject<AVAudio3DMixing> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVAudioStereoMixing : NSObject<AVAudioStereoMixing> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVCaptureAudioDataOutputSampleBufferDelegate : NSObject<AVCaptureAudioDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVCaptureFileOutputDelegate : NSObject<AVCaptureFileOutputDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVCaptureFileOutputRecordingDelegate : NSObject<AVCaptureFileOutputRecordingDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVCapturePhotoCaptureDelegate : NSObject<AVCapturePhotoCaptureDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVCaptureVideoDataOutputSampleBufferDelegate : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVContentKeySessionDelegate : NSObject<AVContentKeySessionDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlaybackCoordinatorPlaybackControlDelegate : NSObject<AVPlaybackCoordinatorPlaybackControlDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerItemOutputPushDelegate : NSObject<AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerItemLegibleOutputPushDelegate : NSObject<AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerItemMetadataCollectorPushDelegate : NSObject<AVPlayerItemMetadataCollectorPushDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerItemMetadataOutputPushDelegate : NSObject<AVPlayerItemMetadataOutputPushDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerItemOutputPullDelegate : NSObject<AVPlayerItemOutputPullDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVPlayerPlaybackCoordinatorDelegate : NSObject<AVPlayerPlaybackCoordinatorDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVSpeechSynthesizerDelegate : NSObject<AVSpeechSynthesizerDelegate> {
}
	-(id) init;
@end

@interface Microsoft_macOS__AVFoundation_AVVideoCompositing : NSObject<AVVideoCompositing> {
}
	-(id) init;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(GCHandle) xamarinGetGCHandle;
	-(bool) xamarinSetGCHandle: (GCHandle) gchandle flags: (enum XamarinGCHandleFlags) flags;
	-(enum XamarinGCHandleFlags) xamarinGetFlags;
	-(void) xamarinSetFlags: (enum XamarinGCHandleFlags) flags;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end


