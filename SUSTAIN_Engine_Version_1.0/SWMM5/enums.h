//-----------------------------------------------------------------------------
//   enums.h
//
//   Project: EPA SWMM5
//   Version: 5.0
//   Date:    5/6/05   (Build 5.0.005)
//            9/5/05   (Build 5.0.006)
//            3/10/06  (Build 5.0.007)
//            7/5/06   (Build 5.0.008)
//   Author:  L. Rossman
//
//   Enumerated variables
//-----------------------------------------------------------------------------

//-------------------------------------
// Names of major object types
//-------------------------------------
 #define MAX_OBJ_TYPES 14
 enum ObjectType {
      GAGE,                            // rain gage
      SUBCATCH,                        // subcatchment
      NODE,                            // conveyance system node
      LINK,                            // conveyance system link
      POLLUT,                          // pollutant
      LANDUSE,                         // land use category
      TIMEPATTERN,                     // dry weather flow time pattern
      CURVE,                           // generic table of values
      TSERIES,                         // generic time series of values
      CONTROL,                         // conveyance system control rules
      TRANSECT,                        // irregular channel cross-section
      AQUIFER,                         // groundwater aquifer
      UNITHYD,                         // RDII unit hydrograph
      SNOWMELT};                       // snowmelt parameter set

//-------------------------------------
// Names of Node sub-types
//-------------------------------------
 #define MAX_NODE_TYPES 4
 enum NodeType {
      JUNCTION,
      OUTFALL,
      STORAGE,
      DIVIDER};

//-------------------------------------
// Names of Link sub-types
//-------------------------------------
 #define MAX_LINK_TYPES 5
 enum LinkType {
      CONDUIT,
      PUMP,
      ORIFICE,
      WEIR,
      OUTLET};

//-------------------------------------
// File types
//-------------------------------------
 enum FileType {
      RAINFALL_FILE,                   // rainfall file
      RUNOFF_FILE,                     // runoff file
      HOTSTART_FILE,                   // hotstart file
      RDII_FILE,                       // RDII file
      INFLOWS_FILE,                    // inflows interface file
      OUTFLOWS_FILE};                  // outflows interface file

//-------------------------------------
// File usage types
//-------------------------------------
 enum FileUsageType {
      NO_FILE,                         // no file usage
      SCRATCH_FILE,                    // use temporary scratch file
      USE_FILE,                        // use previously saved file
      SAVE_FILE};                      // save file currently in use

//-------------------------------------
// Rain gage data types
//-------------------------------------
 enum GageDataType {
      RAIN_TSERIES,                    // rainfall from user-supplied time series
      RAIN_FILE};                      // rainfall from external file

//-------------------------------------
// Cross section shape types
//-------------------------------------
 enum XsectType {
      DUMMY,                           // 0      
      CIRCULAR,                        // 1      closed
      FILLED_CIRCULAR,                 // 2      closed
      RECT_CLOSED,                     // 3      closed
      RECT_OPEN,                       // 4       
      TRAPEZOIDAL,                     // 5       
      TRIANGULAR,                      // 6       
      PARABOLIC,                       // 7
      POWERFUNC,                       // 8      
      RECT_TRIANG,                     // 9       
      RECT_ROUND,                      // 10
      MOD_BASKET,                      // 11      
      HORIZ_ELLIPSE,                   // 12     closed
      VERT_ELLIPSE,                    // 13     closed
      ARCH,                            // 14     closed
      EGGSHAPED,                       // 15     closed
      HORSESHOE,                       // 16     closed
      GOTHIC,                          // 17     closed
      CATENARY,                        // 18     closed
      SEMIELLIPTICAL,                  // 19     closed
      BASKETHANDLE,                    // 20     closed
      SEMICIRCULAR,                    // 21     closed
      IRREGULAR};                      // 22

//-------------------------------------
// Measurement units types
//-------------------------------------
 enum UnitsType {
      US,                              // US units
      SI};                             // SI (metric) units

 enum FlowUnitsType {
      CFS,                             // cubic feet per second
      GPM,                             // gallons per minute
      MGD,                             // million gallons per day
      CMS,                             // cubic meters per second
      LPS,                             // liters per second
      MLD};                            // million liters per day

 enum ConcUnitsType {
      MG,                              // Milligrams / L
      UG,                              // Micrograms / L
      COUNT};                          // Counts / L

//--------------------------------------
// Quantities requiring unit conversions
//--------------------------------------
 enum ConversionType {
      RAINFALL,
      RAINDEPTH,
      EVAPRATE,
      LENGTH,
      LANDAREA,
      VOLUME,
      WINDSPEED,
      TEMPERATURE,
      MASS,
      FLOW};                           // Flow must always be listed last

//-------------------------------------
// Computed subcatchment quantities
//-------------------------------------
 #define MAX_SUBCATCH_RESULTS 7
 enum SubcatchResultType {
      SUBCATCH_RAINFALL,               // rainfall intensity
      SUBCATCH_SNOWDEPTH,              // snow depth
      SUBCATCH_LOSSES,                 // total losses (evap + infil)
      SUBCATCH_RUNOFF,                 // runoff flow rate
      SUBCATCH_GW_FLOW,                // groundwater flow rate to node
      SUBCATCH_GW_ELEV,                // elevation of saturated gw table
      SUBCATCH_WASHOFF};               // pollutant washoff concentration

//-------------------------------------
// Computed node quantities
//-------------------------------------
 #define MAX_NODE_RESULTS 7 
 enum NodeResultType {
      NODE_DEPTH,                      // water depth above invert
      NODE_HEAD,                       // hydraulic head
      NODE_VOLUME,                     // volume stored & ponded
      NODE_LATFLOW,                    // lateral inflow rate
      NODE_INFLOW,                     // total inflow rate
      NODE_OVERFLOW,                   // overflow rate
      NODE_QUAL};                      // concentration of each pollutant

//-------------------------------------
// Computed link quantities
//-------------------------------------
 #define MAX_LINK_RESULTS 6
 enum LinkResultType {
      LINK_FLOW,                       // flow rate
      LINK_DEPTH,                      // flow depth
      LINK_VELOCITY,                   // flow velocity
      LINK_FROUDE,                     // Froude number
      LINK_CAPACITY,                   // ratio of depth to full depth
      LINK_QUAL};                      // concentration of each pollutant

//-------------------------------------
// System-wide flow quantities
//-------------------------------------
#define MAX_SYS_RESULTS 13
enum SysFlowType {
     SYS_TEMPERATURE,                  // air temperature
     SYS_RAINFALL,                     // rainfall intensity
     SYS_SNOWDEPTH,                    // snow depth
     SYS_LOSSES,                       // evap + infil
     SYS_RUNOFF,                       // runoff flow
     SYS_DWFLOW,                       // dry weather inflow
     SYS_GWFLOW,                       // ground water inflow
     SYS_IIFLOW,                       // RDII inflow
     SYS_EXFLOW,                       // external inflow
     SYS_INFLOW,                       // total lateral inflow
     SYS_FLOODING,                     // flooding outflow
     SYS_OUTFLOW,                      // outfall outflow
     SYS_STORAGE};                     // storage volume

//-------------------------------------
// Conduit flow classifications
//-------------------------------------
 #define MAX_FLOW_CLASSES 7
 enum FlowClassType {
      DRY,                             // dry conduit
      UP_DRY,                          // upstream end is dry
      DN_DRY,                          // downstream end is dry
      SUBCRITICAL,                     // sub-critical flow
      SUPCRITICAL,                     // super-critical flow
      UP_CRITICAL,                     // free-fall at upstream end
      DN_CRITICAL};                    // free-fall at downstream end

//-------------------------------------
// Surface pollutant loading categories
//-------------------------------------
 enum LoadingType {
      BUILDUP_LOAD,                    // pollutant buildup load
      DEPOSITION_LOAD,                 // rainfall deposition load
      SWEEPING_LOAD,                   // load removed by sweeping
      BMP_REMOVAL_LOAD,                // load removed by BMPs

/////////////////////////////////////
// New load type added (LR - 7/5/06 )
/////////////////////////////////////
      INFIL_LOAD,                      // runon load removed by infiltration

      RUNOFF_LOAD};                    // load removed by runoff

//-------------------------------------
// Input data options
//-------------------------------------
 enum RainfallType {
      RAINFALL_INTENSITY,              // rainfall expressed as intensity
      RAINFALL_VOLUME,                 // rainfall expressed as volume
      CUMULATIVE_RAINFALL};            // rainfall expressed as cumulative volume

 enum TempType {
      NO_TEMP,                         // no temperature data supplied
      TSERIES_TEMP,                    // temperatures come from time series
      FILE_TEMP};                      // temperatures come from file

enum  WindType {
      MONTHLY_WIND,                    // wind speed varies by month
      FILE_WIND};                      // wind speed comes from file

 enum EvapType {
      CONSTANT_EVAP,                   // constant evaporation rate
      MONTHLY_EVAP,                    // evaporation rate varies by month
      TIMESERIES_EVAP,                 // evaporation supplied by time series
      FILE_EVAP,                       // evaporation comes from file
      PAN_EVAP};                       // pan coeffs. supplied

 enum NormalizerType {
      PER_AREA,                        // buildup is per unit or area
      PER_CURB};                       // buildup is per unit of curb length

 enum BuildupType {
      NO_BUILDUP,                      // no buildup
      POWER_BUILDUP,                   // power function buildup equation
      EXPON_BUILDUP,                   // exponential function buildup equation
      SATUR_BUILDUP};                  // saturation function buildup equation

 enum WashoffType {
      NO_WASHOFF,                      // no washoff
      EXPON_WASHOFF,                   // exponential washoff equation
      RATING_WASHOFF,                  // rating curve washoff equation
      EMC_WASHOFF};                    // event mean concentration washoff

 enum InfilType {
      HORTON,                          // Horton infiltration
      GREEN_AMPT,                      // Green-Ampt infiltration
      CURVE_NUMBER};                   // SCS Curve Number infiltration

enum  SubAreaType {
      IMPERV0,                         // impervious w/o depression storage
      IMPERV1,                         // impervious w/ depression storage
      PERV};                           // pervious

 enum RunoffRoutingType {
      TO_OUTLET,                       // perv & imperv runoff goes to outlet
      TO_IMPERV,                       // perv runoff goes to imperv area
      TO_PERV};                        // imperv runoff goes to perv subarea

 enum RouteModelType {
      SF,                              // steady flow model
      KW,                              // kinematic wave model
      EKW,                             // extended kin. wave model
      DW};                             // dynamic wave model

 enum KinWaveMethodType {
      NORMAL,                          // normal method
      MODIFIED};                       // modified method

enum  CompatibilityType {
      SWMM5,                           // SWMM 5 weighting for area & hyd. radius
      SWMM3,                           // SWMM 3 weighting
      SWMM4};                          // SWMM 4 weighting

 enum InflowType {
      EXTERNAL_INFLOW,                 // user-supplied external inflow
      DRY_WEATHER_INFLOW,              // user-supplied dry weather inflow
      WET_WEATHER_INFLOW,              // computed runoff inflow
      GROUNDWATER_INFLOW,              // computed groundwater inflow
      RDII_INFLOW,                     // computed I&I inflow
      FLOW_INFLOW,                     // inflow parameter is flow
      CONCEN_INFLOW,                   // inflow parameter is pollutant concen.
      MASS_INFLOW};                    // inflow parameter is pollutant mass

 enum PatternType {
      MONTHLY_PATTERN,                 // DWF multipliers for each month
      DAILY_PATTERN,                   // DWF multipliers for each day of week
      HOURLY_PATTERN,                  // DWF multipliers for each hour of day
      WEEKEND_PATTERN};                // hourly multipliers for week end days

 enum OutfallType {
      FREE_OUTFALL,                    // critical depth outfall condition
      NORMAL_OUTFALL,                  // normal flow depth outfall condition
      FIXED_OUTFALL,                   // fixed depth outfall condition
      TIDAL_OUTFALL,                   // variable tidal stage outfall condition
      TIMESERIES_OUTFALL};             // variable time series outfall depth

 enum StorageType {
      TABULAR,                         // area v. depth from table
      FUNCTIONAL};                     // area v. depth from power function

 enum ReactorType {
      CSTR,                            // completely mixed reactor
      PLUG};                           // plug flow reactor

 enum TreatmentType {
      REMOVAL,                         // treatment stated as a removal
      CONCEN};                         // treatment stated as effluent concen.

 enum DividerType {
      CUTOFF_DIVIDER,                  // diverted flow is excess of cutoff flow
      TABULAR_DIVIDER,                 // table of diverted flow v. inflow
      WEIR_DIVIDER,                    // diverted flow proportional to excess flow
      OVERFLOW_DIVIDER};               // diverted flow is flow > full conduit flow

 enum PumpCurveType {
      TYPE1_PUMP,                      // flow varies stepwise with wet well volume
      TYPE2_PUMP,                      // flow varies stepwise with inlet depth 
      TYPE3_PUMP,                      // flow varies with head delivered
      TYPE4_PUMP};                     // flow varies with inlet depth

 enum OrificeType {
      SIDE_ORIFICE,                    // side orifice
      BOTTOM_ORIFICE};                 // bottom orifice

 enum WeirType {
      TRANSVERSE_WEIR,                 // transverse weir
      SIDEFLOW_WEIR,                   // side flow weir
      VNOTCH_WEIR,                     // V-notch (triangular) weir
      TRAPEZOIDAL_WEIR};               // trapezoidal weir

 enum CurveType {
      STORAGE_CURVE,                   // surf. area v. depth for storage node
      DIVERSION_CURVE,                 // diverted flow v. inflow for divider node
      TIDAL_CURVE,                     // water elev. v. hour of day for outfall
      RATING_CURVE,                    // flow rate v. head for outlet link

///////////////////////////////////////
//  New curve type added. (LR - 9/5/05)
///////////////////////////////////////
      CONTROL_CURVE,                   // control setting v. controller variable

      PUMP1_CURVE,                     // flow v. wet well volume for pump
      PUMP2_CURVE,                     // flow v. depth for pump (discrete)
      PUMP3_CURVE,                     // flow v. head for pump (continuous)
      PUMP4_CURVE};                    // flow v. depth for pump (continuous)

 enum InputSectionType {
      s_TITLE,        s_OPTION,       s_FILE,         s_RAINGAGE,
      s_TEMP,         s_EVAP,         s_SUBCATCH,     s_SUBAREA,
      s_INFIL,        s_AQUIFER,      s_GROUNDWATER,  s_SNOWMELT,
      s_JUNCTION,     s_OUTFALL,      s_STORAGE,      s_DIVIDER,
      s_CONDUIT,      s_PUMP,         s_ORIFICE,      s_WEIR,
      s_OUTLET,       s_XSECTION,     s_TRANSECT,     s_LOSSES,
      s_CONTROL,      s_POLLUTANT,    s_LANDUSE,      s_BUILDUP,
      s_WASHOFF,      s_COVERAGE,     s_INFLOW,       s_DWF,
      s_PATTERN,      s_RDII,         s_UNITHYD,      s_LOADING,
      s_TREATMENT,    s_CURVE,        s_TIMESERIES,   s_REPORT,
      s_COORDINATE,   s_VERTICES,     s_POLYGON,      s_LABEL,
      s_SYMBOL,       s_BACKDROP,     s_TAG,          s_PROFILE,
      s_MAP};

 enum InputOptionType {
      FLOW_UNITS,        INFIL_MODEL,       ROUTE_MODEL, 
      START_DATE,        START_TIME,        END_DATE,
      END_TIME,          REPORT_START_DATE, REPORT_START_TIME,
      SWEEP_START,       SWEEP_END,         START_DRY_DAYS,
      WET_STEP,          DRY_STEP,          ROUTE_STEP,
      REPORT_STEP,       ALLOW_PONDING,     INERT_DAMPING,
      SLOPE_WEIGHTING,   VARIABLE_STEP,     NORMAL_FLOW_LTD,
      LENGTHENING_STEP,  MIN_SURFAREA,      COMPATIBILITY,

////////////////////////////////////
//  New option added. (LR - 3/10/06)
////////////////////////////////////
      SKIP_STEADY_STATE, TEMPDIR, IGNORE_RAINFALL};

enum  NoYesType {
      NO,
      YES};

enum  NoneAllType {
      NONE,
      ALL,
      SOME};
